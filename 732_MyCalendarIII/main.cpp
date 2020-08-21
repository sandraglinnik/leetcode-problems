#include <iostream>
#include <set>
#include <map>

class MyCalendarThree {
public:
    MyCalendarThree() = default;

    int book(int start, int end);

private:
    std::map<int, int> events;

};

int MyCalendarThree::book(int start, int end) {
    ++events[start];
    --events[end];
    int cur = 0;
    int k = 0;
    for (auto &a : events) {
        cur += a.second;
        k = std::max(k, cur);
    }
    return k;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
