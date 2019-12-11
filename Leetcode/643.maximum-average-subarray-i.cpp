/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution {
 public:
  double findMaxAverage(vector<int>& nums, int k) {
    int sum = accumulate(nums.begin(), nums.begin() + k, 0);
    int cur = sum;
    for (int i = k; i < nums.size(); i++) {
      sum = sum + nums[i] - nums[i - k];
      cur = max(cur, sum);
    }
    return cur / (double)k;
  }
};
// @lc code=end
