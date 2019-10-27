/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */
class Solution {
 public:
  void reverseString(vector<char>& s) {
    int begin = 0, end = s.size() - 1;
    while (begin < end) {
      swap(s[begin++], s[end--]);
    }
  }
};
