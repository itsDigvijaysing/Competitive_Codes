#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp_inc(n, 1); // LIS ending at each index
        vector<int> dp_dec(n, 1); // LDS starting at each index

        // Calculate LIS ending at each index
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    dp_inc[i] = max(dp_inc[i], dp_inc[j] + 1);
                }
            }
        }

        // Calculate LDS starting at each index
        for (int i = n - 2; i >= 0; --i) {
            for (int j = n - 1; j > i; --j) {
                if (nums[i] > nums[j]) {
                    dp_dec[i] = max(dp_dec[i], dp_dec[j] + 1);
                }
            }
        }

        int max_mountain_length = 0;
        // Find the maximum length of mountain array
        for (int i = 1; i < n - 1; ++i) {
            if (dp_inc[i] > 1 && dp_dec[i] > 1) { // Peak element must be part of both LIS and LDS
                max_mountain_length = max(max_mountain_length, dp_inc[i] + dp_dec[i] - 1);
            }
        }

        return n - max_mountain_length; // Minimum removals to make the array a mountain array
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {1, 3, 1};
    vector<int> nums2 = {2, 1, 1, 5, 6, 2, 3, 1};
    cout << s.minimumMountainRemovals(nums1) << endl; // Output: 0
    cout << s.minimumMountainRemovals(nums2) << endl; // Output: 3
    return 0;
}