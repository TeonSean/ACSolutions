/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */

// @lc code=start
class Solution {
 public:
  int thirdMax(vector<int>& nums) {
    priority_queue<int> q;
    for (auto each : nums) {
      q.push(each);
    }
    int cur = 1;
    int n = q.top();
    int maximum = n;
    while (q.size() && cur < 3) {
      if (q.top() != n) {
        cur++;
        n = q.top();
      }
      q.pop();
    }
    return cur == 3 ? n : maximum;
  }
};
// @lc code=end
