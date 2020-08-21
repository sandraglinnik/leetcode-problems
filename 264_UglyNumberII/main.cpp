#include <iostream>
#include <set>

class Solution {
public:
    uint64_t nthUglyNumber(int n) {
        std::set<uint64_t> res;
        res.insert(1);
        for (int i = 1; i < n; ++i) {
            auto cur = *res.begin();
            res.erase(cur);
            res.insert(cur * 5);
            if (cur % 5) {
                res.insert(cur * 3);
                if (cur % 3) {
                    res.insert(cur * 2);
                }
            }
            balance(res, n - i);

        }
        return *res.begin();
    }

//private:
    void balance(std::set<uint64_t> &s, int n) {
        if (s.size() > n) {
            int diff = s.size() - n;
            auto pos = s.end();
            for (int i = 0; i < diff; ++i) {
                --pos;
            }
            s.erase(pos, s.end());
        }
    }

};

int main() {
    return 0;
}
