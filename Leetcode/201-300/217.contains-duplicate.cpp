/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */
class Solution {
 public:
  bool containsDuplicate(vector<int>& nums) {
    set<int> s;
    for (auto n : nums) {
      if (s.count(n)) {
        return true;
      }
      s.insert(n);
    }
    return false;
  }
};
