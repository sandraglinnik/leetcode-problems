#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> &reconstructQueue(std::vector<std::vector<int>> &people) {
        std::sort(people.begin(), people.end(), [](std::vector<int> &a, std::vector<int> &b) {
            return a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]);
        });
        const int n = people.size();
        for (int i = 0; i < n; ++i) {
            int pos = people[i][1];
            if (i != pos) {
                std::swap(people[pos], people[i]);
                for (int j = i - 1; j > pos; --j) {
                    std::swap(people[j], people[j + 1]);
                }
            }
        }
        return people;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
