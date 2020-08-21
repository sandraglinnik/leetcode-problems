#include <iostream>
#include <vector>
#include <unordered_set>
#include <string_view>

using namespace std;

class Solution {
public:
    string longestDupSubstring(string S)
    {
        string longest;
        unordered_set<string_view> set;
        size_t beg = 1;
        size_t end = S.size() - 1;
        while (beg <= end)
        {
            auto len = beg + (end - beg) / 2;
            bool found = false;
            for (size_t i = 0; i != S.size() - len + 1; ++i)
            {
                const auto [it, inserted] = set.emplace(S.data() + i, len);
                if (!inserted)
                {
                    found = true;
                    longest = move(*it);
                    break;
                }
            }

            if (found)
                beg = len + 1;
            else
                end = len - 1;

            set.clear();
        }

        return longest;
    }
};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
