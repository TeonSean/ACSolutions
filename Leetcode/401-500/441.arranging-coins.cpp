/*
 * @lc app=leetcode id=441 lang=cpp
 *
 * [441] Arranging Coins
 */

// @lc code=start
class Solution {
 public:
  int arrangeCoins(int n) { return floor(sqrt(2.0 * n + 0.25) - 0.5); }
};
// @lc code=end
