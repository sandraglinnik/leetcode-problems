#include <iostream>

class Solution {
public:
    int romanToInt(const std::string &s) {
        int n = s.size();
        int cur_pos = 0;

        int thousands = get_digit(s, n, cur_pos, 'M', ' ', ' ');
        int hundreds = get_digit(s, n, cur_pos, 'C', 'D', 'M');
        int tens = get_digit(s, n, cur_pos, 'X', 'L', 'C');
        int ones = get_digit(s, n, cur_pos, 'I', 'V', 'X');

        return thousands * 1000 + hundreds * 100 + tens * 10 + ones;
    }

private:
    int get_digit (const std::string &s, int size, int &pos, char one, char five, char ten) {
        if (pos >= size)  {
            return 0;
        }

        int res = 0;
        if (s[pos] == five) {
            res = 5;
            ++pos;
            while (pos < size && s[pos] == one) {
                ++res;
                ++pos;
            }
        } else if (s[pos] == one) {
            ++pos;
            ++res;
            if (pos >= size) {
                return 1;
            } else if (s[pos] == five) {
                res = 4;
                ++pos;
            } else if (s[pos] == ten) {
                res = 9;
                ++pos;
            } else {
                while (pos < size && s[pos] == one) {
                    ++res;
                    ++pos;
                }
            }
        }

        return res;




    }
};

int main() {
    std::string s = "MCMXCIV";
    Solution sol;
    std::cout << sol.romanToInt(s);
    return 0;
}
