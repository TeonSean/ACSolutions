/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */
class Solution {
 public:
  int lengthOfLongestSubstring(string s) {
    map<char, int> lastSeen;
    int result = 0;
    int begin = 0;
    for (int i = 0; i < s.size(); i++) {
      if (lastSeen.count(s[i]) && lastSeen[s[i]] >= begin) {
        begin = lastSeen[s[i]] + 1;
      } else {
        result = max(result, i + 1 - begin);
      }
      lastSeen[s[i]] = i;
    }
    return result;
  }
};
