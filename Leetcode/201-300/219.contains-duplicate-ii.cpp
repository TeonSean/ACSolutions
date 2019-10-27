/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */
class Solution {
 public:
  bool containsNearbyDuplicate(vector<int>& nums, int k) {
    set<int> s;
    int init = min((int)nums.size(), k + 1);
    for (int i = 0; i < init; i++) {
      if (s.count(nums[i])) {
        return true;
      }
      s.insert(nums[i]);
    }
    for (int i = init; i < nums.size(); i++) {
      s.erase(nums[i - k - 1]);
      if (s.count(nums[i])) {
        return true;
      }
      s.insert(nums[i]);
    }
    return false;
  }
};
