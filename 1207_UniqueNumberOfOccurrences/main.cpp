#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, size_t> occurrence;
        for (auto a : arr) {
            ++occurrence[a];
        }

        unordered_set<size_t> occurrences;
        for (const auto &a : occurrence) {
            if (occurrences.count(a.second)) {
                return false;
            }
            occurrences.insert(a.second);
        }
        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
