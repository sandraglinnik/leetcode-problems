#include <iostream>
#include <vector>

class Solution {
public:
    int hIndex(std::vector<int>& citations) {
        int n = citations.size();
        if (n == 0 || citations[n - 1] == 0) {
            return 0;
        }
        int l = 1, r = n + 1;
        while (l + 1 < r) {
            int i = (l + r) / 2;
            if (citations[n - i] < i) {
                r = i;
            } else {
                l = i;
            }
        }
        return l;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
