/*
 * @lc app=leetcode id=686 lang=cpp
 *
 * [686] Repeated String Match
 */

// @lc code=start
class Solution {
 public:
  int repeatedStringMatch(string A, string B) {
    int n = (B.size() + A.size() - 1) / A.size();
    string C = "";
    for (int i = 0; i < n; i++) {
      C += A;
    }
    if (C.find(B) != string::npos) {
      return n;
    }
    C += A;
    if (C.find(B) != string::npos) {
      return n + 1;
    }
    return -1;
  }
};
// @lc code=end
