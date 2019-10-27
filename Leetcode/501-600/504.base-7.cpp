/*
 * @lc app=leetcode id=504 lang=cpp
 *
 * [504] Base 7
 */

// @lc code=start
class Solution {
 public:
  string convertToBase7(int num) {
    if (num == 0) {
      return "0";
    }
    int n = abs(num);
    string reverse;
    while (n != 0) {
      reverse += '0' + n % 7;
      n /= 7;
    }
    if (num < 0) {
      reverse += '-';
    }
    return string(reverse.crbegin(), reverse.crend());
  }
};
// @lc code=end
