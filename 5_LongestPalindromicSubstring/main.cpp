#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestPalindrome(const string &s) {
        int n = s.size();
        if (n == 0) {
            return "";
        }
        vector<int> even_palindromes(n, 0);
        vector<int> uneven_palindromes(n, 1);
        vector<int> max_palindromes(n, 1);
        int l = 0, r = 0; // borders of the rightest palindrome

        for (int i = 0; i < n; ++i) {

            if (i >= r) {
                for (int j = 1; i >= j && i + j < n; ++j) {
                    if (s[i - j] == s[i + j]) {
                        uneven_palindromes[i] += 2;
                    } else {
                        break;
                    }
                }

                for (int j = 0; i >= j && i + 1 + j < n; ++j) {
                    if (s[i - j] == s[i + 1 + j]) {
                        even_palindromes[i] += 2;
                    } else {
                        break;
                    }
                }
            } else {
                int symmetric = l + (r - i);
                if (uneven_palindromes[symmetric] / 2 + i <= r) {
                    uneven_palindromes[i] = uneven_palindromes[symmetric];

                } else {
                    uneven_palindromes[i] = (r - i) * 2 + 1;
                }
                for (int j = uneven_palindromes[i] / 2 + 1; i >= j && i + j < n; ++j) {
                    if (s[i - j] == s[i + j]) {
                        uneven_palindromes[i] += 2;
                    } else {
                        break;
                    }
                }

                --symmetric; // the centre of even symmetric palindrome
                if (even_palindromes[symmetric] / 2 + i <= r) {
                    even_palindromes[i] = even_palindromes[symmetric];
                } else {
                    even_palindromes[i] = (r - i) * 2;
                }
                for (int j = even_palindromes[i] / 2; i >= j && i + 1 + j < n; ++j) {
                    if (s[i - j] == s[i + 1 + j]) {
                        even_palindromes[i] += 2;
                    } else {
                        break;
                    }
                }
            }

            max_palindromes[i] = max(even_palindromes[i], uneven_palindromes[i]);
            if (i + max_palindromes[i] / 2 > r) {
                r = i + max_palindromes[i] / 2;
                l = r - max_palindromes[i] + 1;
            }
        }

//        for (int a : even_palindromes) {
//            std::cout << a << ' ';
//        }
//        std::cout << '\n';
//        for (auto a : uneven_palindromes) {
//            std::cout << a << ' ';
//        }
//        std::cout << '\n';

        int max_palindrome = 0;
        for (int i = 0; i < n; ++i) {
            if (max_palindromes[i] > max_palindromes[max_palindrome]) {
                max_palindrome = i;
            }
        }

        return s.substr(max_palindrome - (max_palindromes[max_palindrome]  - 1) / 2,
                max_palindromes[max_palindrome]);

    }
};

int main() {
    Solution sol;
    std::string s;
    std::cin >> s;
    std::cout << sol.longestPalindrome(s);
    return 0;
}
