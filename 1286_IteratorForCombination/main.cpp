#include <iostream>
#include <vector>
#include <unordered_map>

class CombinationIterator {
public:
    CombinationIterator(const std::string &characters, int combinationLength);

    std::string next();

    bool hasNext();

private:
    int n;
    int length;
    std::string letters;
    std::vector<int> iterators;

    std::string get_string();

};

CombinationIterator::CombinationIterator(const std::string &characters, int combinationLength) {
    n = characters.size();
    letters = characters;
    length = combinationLength;
    iterators.resize(length);
    for (int i = 0; i < length; ++i) {
        iterators[i] = i;
    }
    --iterators[length - 1];

}

bool CombinationIterator::hasNext() {
    return iterators[0] < n - length;
}

std::string CombinationIterator::next() {
    if (iterators[length - 1] < n - 1) {
        ++iterators[length - 1];
        return get_string();
    }

    for (int i = length - 2; i >= 0; --i) {
        if (iterators[i + 1] == iterators[i] + 1) {
            continue;
        }
        ++iterators[i];
        for (int j = i + 1; j < length; ++j) {
            iterators[j] = iterators[j - 1] + 1;
        }
        break;
    }

    return get_string();
}

std::string CombinationIterator::get_string() {
    std::string res;
    for (auto i : iterators) {
        res += letters[i];
    }
    return res;
}

int main() {
    CombinationIterator ci("adps", 3);
    while (ci.hasNext()) {
        std::cout << ci.next() << '\n';
    }
    return 0;
}
