/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution {
 public:
  vector<int> findDisappearedNumbers(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
      int index = abs(nums[i]) - 1;
      nums[index] = -abs(nums[index]);
    }
    vector<int> re;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] > 0) {
        re.push_back(i + 1);
      }
    }
    return re;
  }
};
// @lc code=end
