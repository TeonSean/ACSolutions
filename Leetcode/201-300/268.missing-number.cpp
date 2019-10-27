/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */
class Solution {
 public:
  int missingNumber(vector<int>& nums) {
    int total = nums.size() * (nums.size() + 1) / 2;
    for (auto each : nums) {
      total -= each;
    }
    return total;
  }
};
