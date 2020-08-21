#include <iostream>
#include <vector>
#include <queue>

struct Ratio {
    int worker;
    double val;
};

bool operator<(const Ratio &a, const Ratio &b) {
    return a.val < b.val;
}

class Solution {
public:
    double mincostToHireWorkers(std::vector<int>& quality, std::vector<int>& wage, int k) {
        int n = quality.size();

        std::vector<Ratio> ratio(n);
        for (int i = 0; i < n; ++i) {
            ratio[i] = {i, wage[i] * 1. / quality[i]};
        }
        std::sort(ratio.begin(), ratio.end());

        std::priority_queue<int> qualities;
        int q_sum = 0;
        for (int i = 0; i < k; ++i) {
            qualities.push(quality[ratio[i].worker]);
            q_sum += quality[ratio[i].worker];
        }
        double res = q_sum * ratio[k - 1].val;

        for (int i = k; i < n; ++i) {
            if (quality[ratio[i].worker] < qualities.top()) {
                q_sum -= qualities.top();
                qualities.pop();
                qualities.push(quality[ratio[i].worker]);
                q_sum += quality[ratio[i].worker];
                res = std::min(res, q_sum * ratio[i].val);
            }
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
