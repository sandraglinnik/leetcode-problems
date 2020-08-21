#include <iostream>
#include <vector>
#include <unordered_map>

class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet() = default;

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if (pos.count(val)) {
            return false;
        }
        pos[val] = data.size();
        data.push_back(val);
        return true;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if (!pos.count(val)) {
            return false;
        }
        int p = pos[val];
        data[p] = data[data.size() - 1];
        pos[data[p]] = p;
        data.pop_back();
        pos.erase(val);
        return true;
    }

    /** Get a random element from the set. */
    int getRandom() {
        return data[rand() % data.size()];
    }

private:
    std::vector<int> data;
    std::unordered_map<int, int> pos;
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
