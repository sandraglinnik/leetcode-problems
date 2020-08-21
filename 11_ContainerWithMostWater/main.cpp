#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max_area = 0, max_height = height[0];

        int j = n - 1;
        while (j && height[0] >= height[j]) {
            max_area = max(max_area, height[j] * j);
            --j;
        }
        max_area = max(max_area, height[0] * j);


        for (int i = 1; i < j; ++i) {
            if (height[i] <= max_height) {
                continue;
            }
            while (i < j && height[i] >= height[j]) {
                max_area = max(max_area, height[j] * (j - i));
                --j;
            }
            max_area = max(max_area, height[i] * (j - i));
            max_height = height[i];
        }
        return max_area;
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
