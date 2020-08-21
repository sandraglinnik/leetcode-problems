#include <iostream>
#include <vector>
#include <queue>

class Solution {
public:
    int scheduleCourse(std::vector<std::vector<int>> &courses) {
        std::sort(courses.begin(), courses.end(), [](const std::vector<int> &a, const std::vector<int> &b) {
            return a[1] < b[1];
        });
        int days = 0;
        int res = 0;
        std::priority_queue<int> durations;

        for (auto &course : courses) {
            if (days + course[0] <= course[1]) {
                days += course[0];
                ++res;
                durations.push(course[0]);
            } else if (!durations.empty() && course[0] < durations.top()) {
                days -= (durations.top() - course[0]);
                durations.pop();
                durations.push(course[0]);
            }
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
