#include <iostream>
#include <vector>
#include <set>

struct Interval {
    Interval() = delete;
    explicit Interval(int a) : start(a), end(a) {}
    Interval(int a, int b) : start(a), end(b) {}
    std::vector<int> to_vector() const;
    int start;
    int end;
};

std::vector<int> Interval::to_vector() const {
    return {start, end};
}

bool operator<(const Interval &a, const Interval &b) {
    return a.start < b.start || (a.start == b.start && a.end < b.end);
}
bool operator==(const Interval &a, const Interval &b) {
    return a.start == b.start && a.end == b.end;
}

class SummaryRanges {
public:
    /** Initialize your data structure here. */
    SummaryRanges() = default;
    void addNum(int val);
    std::vector<std::vector<int>> getIntervals();

private:
    std::set<Interval> data;
};

void SummaryRanges::addNum(int val) {
    auto range = Interval(val);
    if (data.empty()) {
        data.insert(range);
        return;
    }
    if (data.count(range)) {
        return;
    }

    data.insert(range);
    auto it = data.find(range);
    auto next = it;
    ++next;
    if (it == data.begin()) {
        if (val == next->start) {
            data.erase(it);
        } else if (val == next->start - 1) {
            auto new_range = Interval(val, next->end);
            data.erase(it, ++next);
            data.insert(new_range);
        }
    } else if (next == data.end()) {
        auto prev = it;
        --prev;
        if (val <= prev->end) {
            data.erase(it);
        } else if (val == prev->end + 1) {
            auto new_range = Interval(prev->start, val);
            data.erase(prev, ++it);
            data.insert(new_range);
        }
    } else {
        auto prev = it;
        --prev;
        if (val <= prev->end || val == next->start) {
            data.erase(it);
        } else if (val == prev->end + 1) {
            if (val == next->start - 1) {
                auto new_range = Interval(prev->start, next->end);
                data.erase(prev, ++next);
                data.insert(new_range);
            } else {
                auto new_range = Interval(prev->start, val);
                data.erase(prev, ++it);
                data.insert(new_range);
            }
        } else if (val == next->start - 1) {
            auto new_range = Interval(val, next->end);
            data.erase(it, ++next);
            data.insert(new_range);
        }
    }
}

std::vector<std::vector<int>> SummaryRanges::getIntervals() {
    std::vector<std::vector<int>> res;
    res.reserve(data.size());
    for (const auto &a : data) {
        res.emplace_back(a.to_vector());
    }
    return res;
}

void Print(const std::vector<std::vector<int>> &v) {
    for (auto &a : v) {
        std::cout << '{' << a[0] << ", " << a[1] << "} ";
    }
    std::cout << '\n';
}

int main() {
    SummaryRanges ranges;
    ranges.addNum(1);
    ranges.addNum(3);
    ranges.addNum(7);
    Print(ranges.getIntervals());
    ranges.addNum(2);
    ranges.addNum(3);
    ranges.addNum(6);
    Print(ranges.getIntervals());
    return 0;
}
