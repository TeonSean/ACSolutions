/*
 * @lc app=leetcode id=459 lang=cpp
 *
 * [459] Repeated Substring Pattern
 */

// @lc code=start
class Solution {
 public:
  bool repeatedSubstringPattern(string s) {
    for (int i = s.size() / 2; i >= 1; i--) {
      if (s.size() % i != 0) {
        continue;
      }
      int times = s.size() / i;
      int j = 1;
      for (; j < times; j++) {
        int start = i * j;
        int k = 0;
        for (; k < i; k++) {
          if (s[k] != s[start + k]) {
            break;
          }
        }
        if (k != i) {
          break;
        }
      }
      if (j == times) {
        return true;
      }
    }
    return false;
  }
};
// @lc code=end
