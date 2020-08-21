#include <iostream>
#include <vector>
#include <unordered_map>

struct Element {
    int num = 0;
    int frequency = 0;

    Element() = default;
    Element(int n, int f) : num(n), frequency(f) {}
};

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int> &nums, int k) {
        std::unordered_map<int, int> frequency;
        for (auto a : nums) {
            ++frequency[a];
        }
        std::vector<Element> v;
        v.reserve(frequency.size());
        for (const auto &el : frequency) {
            v.emplace_back(el.first, el.second);
        }
        std::sort(v.begin(), v.end(), [](const Element &a, const Element &b) {return a.frequency > b.frequency;} );
        std::vector<int> res;
        res.reserve(k);
        for (int i = 0; i < k; ++i) {
            res.push_back(v[i].num);
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
