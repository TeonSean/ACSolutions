/*
 * @lc app=leetcode id=551 lang=cpp
 *
 * [551] Student Attendance Record I
 */

// @lc code=start
class Solution {
public:
  bool checkRecord(string s) {
    int A_cnt = 0;
    int L_cnt = 0;
    for (char ch : s) {
      if (ch == 'L') {
        L_cnt++;
        if (L_cnt == 3) {
          return false;
        }
      } else {
        L_cnt = 0;
        if (ch == 'A') {
          A_cnt++;
          if (A_cnt == 2) {
            return false;
          }
        }
      }
    }
    return true;
  }
};
// @lc code=end
