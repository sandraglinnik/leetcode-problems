#include <iostream>

class Solution {
public:
    int bitwiseComplement(int num) {
        if (num == 0) {
            return 1;
        }
        uint res = 1;
        for (uint n = abs(num); n; n = n >> uint(1)) {
            res = res << uint(1);
        }
        return int((res - 1) ^ num);
    }
};

int main() {
    return 0;
}
