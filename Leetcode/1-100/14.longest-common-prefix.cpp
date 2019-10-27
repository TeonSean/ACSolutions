/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */
class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
      return "";
    }
    if (strs.size() == 1) {
      return strs[0];
    }
    string result = "";
    for (int i = 0;; i++) {
      for (int j = 1; j < strs.size(); j++) {
        if (i == strs[j].size() || strs[j][i] != strs[j - 1][i]) {
          return result;
        }
      }
      result += strs[0][i];
    }
    return result;
  }
};
