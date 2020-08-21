#include <iostream>
#include <vector>
#include <queue>

class Solution {
public:
    int maxCandies(std::vector<int>& status, std::vector<int>& candies, std::vector<std::vector<int>>& keys, std::vector<std::vector<int>>& containedBoxes, std::vector<int>& initialBoxes) {
//        status:
//            0 - closed
//            1 - open / have a key
//            2 - found
//            3 - available
//            4 - visited
        std::queue<int> available;
        for (auto a : initialBoxes) {
            if (status[a] == 1) {
                available.push(a);
                status[a] = 3;
            } else {
                status[a] = 2;
            }

        }

        int res = 0;
        while (!available.empty()) {
            int cur = available.front();
            available.pop();
            res += candies[cur];
            for (auto box : containedBoxes[cur]) {
                if (status[box] >= 2) {
                    continue;
                }
                if (status[box] == 1) {
                    status[box] = 3;
                    available.push(box);
                } else {
                    status[box] = 2;
                }
            }
            for (auto key : keys[cur]) {
                if (status[key] >= 3) {
                    continue;
                }
                if (status[key] == 2) {
                    status[key] = 3;
                    available.push(key);
                } else if (status[key] == 0) {
                    status[key] = 1;
                }
            }
            status[cur] = 4;
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
