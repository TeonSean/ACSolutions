/*
 * @lc app=leetcode id=645 lang=cpp
 *
 * [645] Set Mismatch
 */

// @lc code=start
class Solution {
 public:
  vector<int> findErrorNums(vector<int>& nums) {
    int x = 0;
    for (int n : nums) {
      x ^= n;
    }
    for (int i = 1; i <= nums.size(); i++) {
      x ^= i;
    }
    int rightmost = x & ~(x - 1);
    int x0 = 0;
    int x1 = 0;
    for (int n : nums) {
      if ((n & rightmost) == 0) {
        x0 ^= n;
      } else {
        x1 ^= n;
      }
    }
    for (int i = 1; i <= nums.size(); i++) {
      if ((i & rightmost) == 0) {
        x0 ^= i;
      } else {
        x1 ^= i;
      }
    }
    for (int n : nums) {
      if (n == x0) {
        return {x0, x1};
      }
      if (n == x1) {
        return {x1, x0};
      }
    }
    return {};
  }
};
// @lc code=end
