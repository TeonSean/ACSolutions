/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */

// @lc code=start
class Solution {
 public:
  int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int cnt = 0;
    int i = 0;
    int j = 0;
    while (i < g.size() && j < s.size()) {
      if (g[i] <= s[j]) {
        cnt++;
        i++;
      }
      j++;
    }
    return cnt;
  }
};
// @lc code=end
