/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */
class Solution {
 public:
  int firstUniqChar(string s) {
    vector<int> pos[26];
    for (int i = 0; i < s.size(); i++) {
      pos[s[i] - 'a'].push_back(i);
    }
    int first = s.size();
    for (auto& each : pos) {
      if (each.size() == 1) {
        first = min(first, each[0]);
      }
    }
    return first == s.size() ? -1 : first;
  }
};
