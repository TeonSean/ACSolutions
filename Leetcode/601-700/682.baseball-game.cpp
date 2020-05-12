/*
 * @lc app=leetcode id=682 lang=cpp
 *
 * [682] Baseball Game
 */

// @lc code=start
class Solution {
 public:
  int calPoints(vector<string>& ops) {
    list<int> valid;
    int sum = 0;
    for (string& op : ops) {
      if (op == "C") {
        sum -= valid.back();
        valid.pop_back();
      } else if (op == "D") {
        valid.push_back(valid.back() * 2);
        sum += valid.back();
      } else if (op == "+") {
        auto it = valid.rbegin();
        it++;
        valid.push_back(valid.back() + *it);
        sum += valid.back();
      } else {
        valid.push_back(stoi(op));
        sum += valid.back();
      }
    }
    return sum;
  }
};
// @lc code=end
