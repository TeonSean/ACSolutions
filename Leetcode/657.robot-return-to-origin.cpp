/*
 * @lc app=leetcode id=657 lang=cpp
 *
 * [657] Robot Return to Origin
 */

// @lc code=start
class Solution {
 public:
  bool judgeCircle(string moves) {
    int dx = 0, dy = 0;
    for (char ch : moves) {
      if (ch == 'U') {
        dy++;
      } else if (ch == 'D') {
        dy--;
      } else if (ch == 'R') {
        dx++;
      } else if (ch == 'L') {
        dx--;
      }
    }
    return dx == 0 && dy == 0;
  }
};
// @lc code=end
