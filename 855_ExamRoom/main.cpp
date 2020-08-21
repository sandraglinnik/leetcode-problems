#include <iostream>
#include <set>
#include <vector>
#include <unordered_map>

struct vacant_place {
    int num;
    int dist;
    std::vector<int> neighbours;
};

bool operator<(const vacant_place &a, const vacant_place &b) {
    return a.dist > b.dist || (a.dist == b.dist && a.num < b.num);
}

class ExamRoom {
public:
    explicit ExamRoom(int N) : seats(N) { vacant_places.insert({0, N, {-1, -1}}); }

    int seat();

    void leave(int p);

    void get_status();

private:
    int seats = 0;
    int students = 0;
    std::set<vacant_place> vacant_places;
    std::unordered_map<int, std::vector<int>> neighbours;

    vacant_place get_vacant(const std::vector<int> &nb);

};

int ExamRoom::seat() {

    auto new_student = *vacant_places.begin();
    vacant_places.erase(vacant_places.begin());
    auto vacant =  get_vacant({new_student.neighbours[0], new_student.num});
    if (vacant.num != -1) {
        vacant_places.insert(vacant);
    }
    vacant = get_vacant({new_student.num, new_student.neighbours[1]});
    if (vacant.num != -1) {
        vacant_places.insert(vacant);
    }

    neighbours[new_student.num] = new_student.neighbours;
    if (new_student.neighbours[0] >= 0) {
        neighbours[new_student.neighbours[0]][1] = new_student.num;
    }
    if (new_student.neighbours[1] >= 0) {
        neighbours[new_student.neighbours[1]][0] = new_student.num;
    }

    return new_student.num;
}

void ExamRoom::leave(int p) {
    auto vacant = get_vacant({neighbours[p][0], p});
    if (vacant.num != -1) {
        vacant_places.erase(vacant);
    }
    vacant = get_vacant({p, neighbours[p][1]});
    if (vacant.num != -1) {
        vacant_places.erase(vacant);
    }

    vacant = get_vacant(neighbours[p]);
    if (vacant.num != -1) {
        vacant_places.insert(vacant);
    }

    if (neighbours[p][0] >= 0) {
        neighbours[neighbours[p][0]][1] = neighbours[p][1];
    }
    if (neighbours[p][1] >= 0) {
        neighbours[neighbours[p][1]][0] = neighbours[p][0];
    }

    neighbours.erase(p);
}

vacant_place ExamRoom::get_vacant(const std::vector<int> &nb) {
    if (nb[0] == -1) {
        if (nb[1] == -1) {
            return {0, seats, nb};
        }
        if (nb[1] == 0) {
            return {-1};
        }
        return {0, nb[1], nb};
    }
    if (nb[1] == -1) {
        if (nb[0] == seats - 1) {
            return {-1};
        }
        return {seats - 1, seats - 1 - nb[0], nb};
    }

    if (nb[1] - nb[0] == 1) {
        return {-1};
    }

    int num = (nb[0] + nb[1]) / 2;
    return {num, num - nb[0], nb};
}

void ExamRoom::get_status() {
    std::cout << "vacant places:\n";
    for (auto &place : vacant_places) {
        std::cout << place.num << ' ';
    }
    std::cout << std::endl;
    std::cout << "existing: \n";
    for (auto &a : neighbours) {
        std::cout << a.first << "(" << a.second[0] << ", " << a.second[1] << "), ";
    }
    std::cout << std::endl;
}

int main() {
    ExamRoom er(10);
    std::cout << er.seat() << std::endl;
    std::cout << er.seat() << std::endl;
    std::cout << er.seat() << std::endl;

    er.leave(0);
    er.leave(4);
    er.get_status();
    return 0;
}
