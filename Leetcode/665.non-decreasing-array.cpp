/*
 * @lc app=leetcode id=665 lang=cpp
 *
 * [665] Non-decreasing Array
 */

// @lc code=start
class Solution {
 public:
  bool checkPossibility(vector<int>& nums) {
    int problem_index = -1;
    for (int i = 0; i < nums.size() - 1; i++) {
      if (nums[i] > nums[i + 1]) {
        if (problem_index != -1) {
          return false;
        }
        problem_index = i;
      }
    }
    if (problem_index == -1 || problem_index == 0 ||
        problem_index == nums.size() - 2) {
      return true;
    }
    return nums[problem_index - 1] <= nums[problem_index + 1] ||
           nums[problem_index] <= nums[problem_index + 2];
  }
};
// @lc code=end
