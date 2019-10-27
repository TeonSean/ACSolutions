/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */
class Solution {
 public:
  int lengthOfLastWord(string s) {
    bool in_word = false;
    int cnt = 0;
    for (char ch : s) {
      if (ch == ' ') {
        in_word = false;
      } else {
        if (!in_word) {
          cnt = 0;
        }
        in_word = true;
        cnt++;
      }
    }
    return cnt;
  }
};
