#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    std::string intToRoman(int num) {
        std::vector<std::string> roman_digits;
        roman_digits.reserve(4);
        int cur_digit = num % 10;
        num /= 10;
        roman_digits.emplace_back(get_digit(cur_digit, "I", "V", "X"));

        if (num) { // getting tens
            cur_digit = num % 10;
            num /= 10;
            roman_digits.emplace_back(get_digit(cur_digit, "X", "L", "C"));
        } else {
            return get_answer(roman_digits);
        }

        if (num) { // hundreds
            cur_digit = num % 10;
            num /= 10;
            roman_digits.emplace_back(get_digit(cur_digit, "C", "D", "M"));
        } else {
            return get_answer(roman_digits);
        }


        if (num) { // thousands
            cur_digit = num;
            roman_digits.emplace_back(get_digit(cur_digit, "M", "", ""));
        }

        return get_answer(roman_digits);

    }

private:
    std::string get_digit (int digit, const std::string &one, const std::string &five, const std::string &ten) {
        if (digit == 4) {
            return one + five;
        }
        if (digit == 9) {
            return one + ten;
        }
        std::string res;
        if (digit >= 5) {
            res += five;
            digit -= 5;
        }
        for (int i = 0; i < digit; ++i) {
            res += one;
        }
        return res;

    }
    std::string get_answer(const std::vector<std::string> &reversed) {
        std::string res;
        for (int i = reversed.size() - 1; i >= 0; --i) {
            res += reversed[i];
        }
        return res;
    }
};

int main() {
    Solution sol;
    int a;
    std::cin >> a;
    std::cout << sol.intToRoman(a);
    return 0;
}
