#include <iostream>
#include <unordered_set>

class Solution {
public:
    std::string toGoatLatin(const std::string &s) {
        std::string ans;
        std::string suf = "maa";
        bool last = false;
        for (int i = 0; i < s.size(); suf += 'a') {
            int j = s.find(' ', i);
            if (j < 0 || j >= s.size()) {
                last = true;
                j = s.size();
            }
            auto cur_word = s.substr(i, j - i);
            if (!vowels.count(cur_word[0])) {
                cur_word = cur_word.substr(1) + cur_word[0];
            }
            ans += cur_word;
            ans += suf;
            if (!last) {
                ans += ' ';
            }
            i = j + 1;
        }
        return ans;
    }

private:
    std::unordered_set<char> vowels = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
