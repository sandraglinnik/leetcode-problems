#include <iostream>
#include <vector>
#include <unordered_map>

class SnapshotArray {
public:
    SnapshotArray(int length);

    void set(int index, int val);

    int snap();

    int get(int index, int snap_id);

private:
    int cur_snap = 0;
    std::vector<std::vector<int>> changes_on_index;
    std::vector<std::unordered_map<int, int>> history_of_index;
};

SnapshotArray::SnapshotArray(int length) {
    changes_on_index.resize(length);
    history_of_index.resize(length);
}

void SnapshotArray::set(int index, int val) {
    history_of_index[index][cur_snap] = val;
    if (changes_on_index[index].empty() ||  changes_on_index[index][changes_on_index[index].size() - 1] != cur_snap) {
        changes_on_index[index].push_back(cur_snap);
    }
}

int SnapshotArray::snap() {
    return cur_snap++;
}

int SnapshotArray::get(int index, int snap_id) {
    int left = 0, right = changes_on_index[index].size();
    if (right == 0 || changes_on_index[index][0] > snap_id) {
        return 0;
    }
    while (left + 1 < right) {
        int mid = (left + right) / 2;
        if (changes_on_index[index][mid] <= snap_id) {
            left = mid;
        } else {
            right = mid;
        }
    }
    return history_of_index[index][changes_on_index[index][left]];
}


int main() {

    return 0;
}
