#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int64_t n = nums1.size();
        int64_t m = nums2.size();

        if (n == 0) {
            if (m % 2) {
                return nums2[m / 2];
            } else {
                return (nums2[m / 2 - 1] + nums2[m / 2]) / 2.;
            }
        }
        if (m == 0) {
            if (n % 2) {
                return nums1[n / 2];
            } else {
                return (nums1[n / 2 - 1] + nums1[n / 2]) / 2.;
            }
        }

        int64_t k = (m + n - 1) / 2; // amount of elements for the left side of the median

        int64_t res = get_median(nums1, nums2);

        if (res >= 0) {
            if ((n + m) % 2) {
                return nums1[res];
            } else {
                int next = (res + 1 < n) ? ((k - res < m) ? min(nums1[res + 1], nums2[k - res]) : nums1[res + 1]) :
                           nums2[k - res];
                return (nums1[res] + next) / 2.;
            }
        }

        res = get_median(nums2, nums1);

        if ((n + m) % 2) {
            return nums2[res];
        } else {
            int next = (res + 1 < m) ? ((k - res < n) ? min(nums2[res + 1], nums1[k - res]) : nums2[res + 1]) :
                       nums1[k - res];
            return (nums2[res] + next) / 2.;        }

    }

private:
    int64_t get_median(vector<int>& nums1, vector<int>& nums2) {
        int64_t n = nums1.size();
        int64_t m = nums2.size();
        int64_t l, r;

        int64_t k = (m + n - 1) / 2; // amount of elements for the left side of the median

        l = max((int64_t)0, k - m);
        r = min(n - 1, k);
        // borders of elements in nums1 which can be a median


        while (l <= r) {
            int64_t cur = (l + r) / 2;
            int64_t pos = k - cur; // place of nums1[cur] in nums2 to be a median
            if (pos == 0) {
                if (nums1[cur] <= nums2[0]) {
                    return cur;
                } else {
                    r = cur - 1;
                    continue;
                }
            }
            if (pos == m) {
                if (nums1[cur] >= nums2[m - 1]) {
                    return cur;
                } else {
                    l = cur + 1;
                    continue;
                }
            }

            if (nums1[cur] > nums2[pos]) {
                r = cur - 1;
            } else if (nums1[cur] < nums2[pos - 1]) {
                l = cur + 1;
            } else {
                return cur;
            }
        }

        return -1;
    }
};

int main() {
    vector<int> a = {0};
    vector<int> b = {2, 3, 4};
    Solution sol;
    cout << sol.findMedianSortedArrays(a, b);
    return 0;
}
