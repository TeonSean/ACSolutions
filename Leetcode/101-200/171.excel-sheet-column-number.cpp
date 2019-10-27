/*
 * @lc app=leetcode id=171 lang=cpp
 *
 * [171] Excel Sheet Column Number
 */
class Solution {
 public:
  int titleToNumber(string s) {
    int num = 0;
    long long base = 1;
    for (int i = s.size() - 1; i >= 0; i--) {
      num += (s[i] - 'A' + 1) * base;
      base *= 26;
    }
    return num;
  }
};
