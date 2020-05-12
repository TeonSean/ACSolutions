/*
 * @lc app=leetcode id=680 lang=cpp
 *
 * [680] Valid Palindrome II
 */

// @lc code=start
class Solution {
 public:
  bool isPalindrome(string& s, int front, int back) {
    while (front < back) {
      if (s[front++] != s[back--]) {
        return false;
      }
    }
    return true;
  }

  bool validPalindrome(string s) {
    int begin = 0, end = s.size() - 1;
    while (begin < end) {
      if (s[begin] != s[end]) {
        return isPalindrome(s, begin, end - 1) ||
               isPalindrome(s, begin + 1, end);
      } else {
        begin++;
        end--;
      }
    }
    return true;
  }
};
// @lc code=end
