/*
 * @lc app=leetcode id=557 lang=cpp
 *
 * [557] Reverse Words in a String III
 */

// @lc code=start
class Solution {
 public:
  string reverseWords(string s) {
    int begin = 0;
    while (begin < s.size()) {
      int space = s.find(' ', begin);
      if (space == -1) {
        space = s.size();
      }
      int bound = (space - begin) / 2;
      for (int i = 0; i < bound; i++) {
        swap(s[begin + i], s[space - 1 - i]);
      }
      begin = space + 1;
    }
    return s;
  }
};
// @lc code=end
