/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */
class Solution {
 public:
  bool isSubsequence(string s, string t) {
    int s_index = 0;
    for (auto each : t) {
      if (each == s[s_index]) {
        s_index++;
        if (s_index == s.size()) {
          break;
        }
      }
    }
    return s_index == s.size();
  }
};
