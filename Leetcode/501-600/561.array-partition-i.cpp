/*
 * @lc app=leetcode id=561 lang=cpp
 *
 * [561] Array Partition I
 */

// @lc code=start
class Solution {
 public:
  int arrayPairSum(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int cnt = 0;
    for (int i = 0; i < nums.size(); i += 2) {
      cnt += nums[i];
    }
    return cnt;
  }
};
// @lc code=end
