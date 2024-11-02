#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int output = 1;
        int num_len = nums.size();
        
        sort(nums.begin(), nums.end());
        unordered_set<int> numSet(nums.begin(), nums.end());

        for (int i = 0; i < num_len; ++i) {
            int count = 1;
            int num = nums[i];

            while (true) {
                int root = sqrt(num);
                if (root * root != num || numSet.find(root) == numSet.end()) {
                    break;
                }
                count++;
                num = root;
            }

            output = max(output, count);
        }

        return output == 1 ? -1 : output;
    }
};

// class Solution {
// public:
//     int longestSquareStreak(vector<int>& nums) {
//         // cout << nums.size() << endl;
//         int output = 1;
//         sort(nums.begin(), nums.end()); // Corrected sorting order
//         for (int i = 0; i < nums.size(); i++) {
//             // cout << nums[i] << " ";
//             int count = 1; // Initialize count to 1
//             int num = nums[i];
//             while (true) {
//                 int root = sqrt(num);
//                 if (root * root != num) break;
//                 bool found = false;
//                 for (int j = i; j >= 0; j--) {
//                     if (nums[j] == root) {
//                         count++;
//                         num = root;
//                         found = true;
//                         break;
//                     }
//                 }
//                 if (!found) break; // Break if the root is not found
//             }
//             output = max(output, count);
//         }
//         if (output == 1) return -1;
//         return output;
//     }
// };

// class Solution {
// public:
//     int longestSquareStreak(vector<int>& nums) {
//         int output = 1;
//         int num_len = nums.size();
//         int size = sizeof(nums) / sizeof(nums[0]);
//         sort(nums.begin(), nums.end()); 
//         for(int z=0; z <num_len; z++){
//             int num = nums[z];
//             int root = sqrt(num);
//             if (root * root != num){ 
//                 if ((num * num) > nums[num_len - 1]) { 
//                     nums[z] = 0;
//                 } else if (!binary_search(nums.begin(), nums.end(), num * num)) {
//                     nums[z] = 0;
//                 }
//             }
//         }
//         nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
//         // sort(nums.begin(), nums.end()); 
//         for (int i = 0; i < nums.size(); i++) {
//             int count = 1;
//             int num = nums[i];
//             int root = sqrt(num);
//             while (true) {
//                 int root = sqrt(num);
//                 if (root * root != num) break;
//                 bool found = false;
//                 for (int j = i; j >= 0; j--) {
//                     if (nums[j] < root) break;
//                     if (nums[j] == root) {
//                         count++;
//                         num = root;
//                         found = true;
//                         break;
//                     }
//                 }
//                 if (!found) break;
//             }
//             output = max(output, count);
//         }
//         if (output == 1) return -1;
//         return output;
//     }
// };

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    Solution sol;
    cout << sol.longestSquareStreak(nums) << endl;
    return 0;
}