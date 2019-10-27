/*
 * @lc app=leetcode id=598 lang=cpp
 *
 * [598] Range Addition II
 */

// @lc code=start
class Solution {
 public:
  int maxCount(int m, int n, vector<vector<int>>& ops) {
    int min_row = m;
    int min_col = n;
    for (auto& op : ops) {
      min_row = min(min_row, op[0]);
      min_col = min(min_col, op[1]);
    }
    return min_row * min_col;
  }
};
// @lc code=end
