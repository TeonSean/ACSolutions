/*
 * @lc app=leetcode id=628 lang=cpp
 *
 * [628] Maximum Product of Three Numbers
 */

// @lc code=start
class Solution {
 public:
  int maximumProduct(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    if (nums.back() == 0) {
      return 0;
    }
    if (nums.back() < 0 || nums[0] >= 0 || nums[1] >= 0) {
      int len = nums.size();
      return nums[len - 1] * nums[len - 2] * nums[len - 3];
    }
    return nums.back() * max(nums[0] * nums[1],
                             nums[nums.size() - 2] * nums[nums.size() - 3]);
  }
};
// @lc code=end
