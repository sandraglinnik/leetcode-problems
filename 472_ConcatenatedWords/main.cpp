#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <set>

using namespace std;

class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string> &dict) {
        vector<string> res;
        for (auto &word : dict) {
            words.insert(word);
            possible_length.insert(word.length());
        }
        if (words.count("")) {
            words.erase("");
            possible_length.erase(0);
        }
        for (auto &word : dict) {
            if (is_concatenated(word)) {
                res.push_back(word);
            }
        }
        return res;
    }

private:
    unordered_set<string> words;
    unordered_map<string, bool> concatenated;
    set<int> possible_length;

    bool is_concatenated(const string &word) {
        if (concatenated.count(word)) {
            return concatenated[word];
        }
        for (auto l : possible_length) {
            if (l >= word.size()) {
                concatenated[word] = false;
                return false;
            }
            if (words.count(word.substr(0, l))) {
                string suf = word.substr(l);
                if (words.count(suf) || is_concatenated(suf)) {
                    concatenated[word] = true;
                    return true;
                }
            }
        }
        concatenated[word] = false;
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
