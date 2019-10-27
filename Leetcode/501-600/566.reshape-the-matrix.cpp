/*
 * @lc app=leetcode id=566 lang=cpp
 *
 * [566] Reshape the Matrix
 */

// @lc code=start
class Solution {
 public:
  vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c) {
    int cnt = r * c;
    if (nums.size() * nums[0].size() != cnt) {
      return nums;
    }
    vector<vector<int>> re(r, vector<int>(c));
    for (int i = 0; i < cnt; i++) {
      re[i / c][i % c] = nums[i / nums[0].size()][i % nums[0].size()];
    }
    return re;
  }
};
// @lc code=end
