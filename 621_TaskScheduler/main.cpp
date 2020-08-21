#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

struct Task {
    int left = 0;
    int next_time = 0;
};

bool operator<(const Task &a, const Task &b) {
    return a.left < b.left;
}

class Solution {
public:
    int leastInterval(const std::vector<char>& tasks, int n) {
        if (n == 0) {
            return tasks.size();
        }

        std::priority_queue<Task> available;
        std::queue<Task> waiting;
        std::unordered_map<char, int> count_tasks;
        for (auto a : tasks) {
            ++count_tasks[a];
        }
        for (auto &task : count_tasks) {
            available.push({task.second, 0});
        }

        if (count_tasks.size() <= n + 1) {
            int max_task = available.top().left;
            int count = 0;
            while (!available.empty() && available.top().left == max_task) {
                ++count;
                available.pop();
            }
            return (max_task - 1) * (n + 1) + count;
        }

        int time = 0;
        while (!available.empty() || !waiting.empty()) {
            ++time;

            if (!waiting.empty() && waiting.front().next_time <= time) {
                available.push(waiting.front());
                waiting.pop();
            }

            if (available.empty()) {
                time = waiting.front().next_time - 1;
                continue;
            }

            auto task = available.top();
            available.pop();
            --task.left;
            task.next_time = time + n + 1;
            if (task.left) {
                waiting.push(task);
            }
        }

        return time;
    }
};

int main() {
    Solution sol;
    std::cout << sol.leastInterval({'a', 'a', 'a', 'b', 'b', 'b'}, 3);
    return 0;
}
