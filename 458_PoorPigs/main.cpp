#include <iostream>
#include <cmath>

class Solution {
public:
    int poorPigs(double buckets, int minutesToDie, int minutesToTest) {
        int attempts = minutesToTest / minutesToDie;
        double res = log(buckets) / log(attempts + 1);
        if (res > int(res)) {
            return int(res) + 1;
        } else {
            return int(res);
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
