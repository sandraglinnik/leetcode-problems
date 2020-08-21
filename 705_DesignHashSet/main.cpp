#include <iostream>
#include <vector>

class MyHashSet {
public:
    MyHashSet();

    void add(int key);
    void remove(int key);
    bool contains(int key);

private:
    int size = 1024;
    std::vector<std::vector<int>> data;

    int find(int val);
};

MyHashSet::MyHashSet() {
    data.resize(size);
}

bool MyHashSet::contains(int key) {
    return (find(key) >= 0);
}

void MyHashSet::add(int key) {
    int pos = key % size;
    if (find(key) == -1) {
        data[pos].push_back(key);
    }
}

void MyHashSet::remove(int key) {
    int i = find(key);
    if (i < 0) {
        return;
    }
    int pos = key % size;
    data[pos][i] = data[pos][data[pos].size() - 1];
    data[pos].pop_back();
}

int MyHashSet::find(int val) {
    int pos = val % size;
    for (int i = 0; i < data[pos].size(); ++i) {
        if (data[pos][i] == val) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> v(1000000, 0);
    return 0;
}
