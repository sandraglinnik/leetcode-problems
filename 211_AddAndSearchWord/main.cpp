#include <iostream>
#include <unordered_map>
#include <vector>

bool equal(const std::string &a, const std::string &b) {
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        if (a[i] != '.' && a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

class WordDictionary {
public:
    /** Initialize your data structure here. */
    WordDictionary() = default;

    /** Adds a word into the data structure. */
    void addWord(const std::string &word);

    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(const std::string &word);

private:
    std::unordered_map<int, std::vector<std::string>> data;

};

void WordDictionary::addWord(const std::string &word) {
    data[word.size()].push_back(word);
}

bool WordDictionary::search(const std::string &word) {
    if (!data.count(word.size())) {
        return false;
    }
    for (auto &w : data[word.size()]) {
        if (equal(word, w)) {
            return true;
        }
    }
    return false;
}

int main() {

    return 0;
}
