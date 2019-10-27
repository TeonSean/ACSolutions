/*
 * @lc app=leetcode id=581 lang=cpp
 *
 * [581] Shortest Unsorted Continuous Subarray
 */

// @lc code=start
class Solution {
public:
  int findUnsortedSubarray(vector<int> &nums) {
    int min_unordered = -1;
    int max_unordered = -1;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] < nums[i - 1]) {
        if (min_unordered == -1 || nums[i] < nums[min_unordered]) {
          min_unordered = i;
        }
        if (max_unordered == -1 || nums[i - 1] >= nums[max_unordered]) {
          max_unordered = i - 1;
        }
      }
    }
    if (min_unordered == -1) {
      return 0;
    }
    auto high = lower_bound(nums.begin() + max_unordered, nums.end(),
                            nums[max_unordered]);
    auto low = upper_bound(nums.begin(), nums.begin() + min_unordered,
                           nums[min_unordered]);
    return high - low;
  }
};
// @lc code=end
