#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:

    std::vector<std::string> &wordBreak(const std::string &s, std::vector<std::string> &wordDict) {
        sentences[s.size()] = {""};
        get_sentences(0, s, wordDict);
        return sentences[0];
    }

private:
    std::unordered_map<int, std::vector<std::string>> sentences;


    void get_sentences(int i, const std::string &s, std::vector<std::string> &wordDict) {
        if (sentences.count(i)) { // already got sentences at i
            return;
        }
        for (const auto &word : wordDict) {
            if (i + word.size() <= s.size() && s.substr(i, word.size()) == word) {
                get_sentences(i + word.size(), s, wordDict);
                for (const auto &sent : sentences[i + word.size()]) {
                    sentences[i].push_back(sent.empty() ? word : word + " " + sent);
                }
            }
        }
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
