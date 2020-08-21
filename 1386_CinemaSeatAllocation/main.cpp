#include <iostream>
#include <unordered_map>
#include <vector>

struct Location {
    Location() = default;
//    Location(int n) {
//        Update(n);
//    }
    void Update(int n) {
        if (n == 2 || n == 3) {
            a = false;
        } else if (n == 4 || n == 5) {
            a = false;
            b = false;
        } else if (n == 6 || n == 7) {
            b = false;
            c = false;
        } else if (n == 8 || n == 9) {
            c = false;
        }
    }

    int a = true;
    int b = true;
    int c = true;

    int get_groups() const {
        return (a && c) ? 2 : (a || b || c);
    };
};

class Solution {
public:
    int maxNumberOfFamilies(int n, std::vector<std::vector<int>>& reservedSeats) {
        std::unordered_map<int, Location> reserved;
        for (const auto &a : reservedSeats) {
            if (a[1] != 1 && a[1] != 10) {
                reserved[a[0]].Update(a[1]);
            }
        }
        int res = (n - reserved.size()) * 2;
        for (auto &a : reserved) {
            res += a.second.get_groups();
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
