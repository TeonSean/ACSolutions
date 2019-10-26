/*
 * @lc app=leetcode id=532 lang=cpp
 *
 * [532] K-diff Pairs in an Array
 */

// @lc code=start
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if (nums.size() == 0 || k < 0) {
            return 0;
        }
        int cnt = 0;
        sort(nums.begin(), nums.end());
        int last = nums[0] - 1;
        int max_val = nums.back();
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == last) {
                continue;
            }
            last = nums[i];
            int target = nums[i] + k;
            if (target > max_val) {
                break;
            }
            if (binary_search(nums.begin() + i + 1, nums.end(), target)) {
                cnt++;
            }
        }
        return cnt;
    }
};
// @lc code=end

