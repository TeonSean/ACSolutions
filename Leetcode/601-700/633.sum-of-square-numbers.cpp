/*
 * @lc app=leetcode id=633 lang=cpp
 *
 * [633] Sum of Square Numbers
 */

// @lc code=start
class Solution {
 public:
  bool judgeSquareSum(int c) {
    long long left = 0;
    long long right = sqrt(c);
    while (left <= right) {
      long long cur = left * left + right * right;
      if (cur == c) {
        return true;
      }
      if (cur > c) {
        right--;
      } else {
        left++;
      }
    }
    return false;
  }
};
// @lc code=end
