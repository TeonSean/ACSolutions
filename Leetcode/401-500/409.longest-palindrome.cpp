/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */
class Solution {
 public:
  int longestPalindrome(string s) {
    map<char, int> cnt;
    for (auto each : s) {
      cnt[each]++;
    }
    int len = 0;
    bool odd = false;
    for (auto pair : cnt) {
      if (pair.second % 2 == 1) {
        odd = true;
        len += pair.second - 1;
      } else {
        len += pair.second;
      }
    }
    return odd ? len + 1 : len;
  }
};
