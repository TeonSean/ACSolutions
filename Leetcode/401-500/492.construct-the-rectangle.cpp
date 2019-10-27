/*
 * @lc app=leetcode id=492 lang=cpp
 *
 * [492] Construct the Rectangle
 */

// @lc code=start
class Solution {
 public:
  vector<int> constructRectangle(int area) {
    int root = sqrt(area);
    if (root * root == area) {
      return vector<int>(2, root);
    }
    while (true) {
      if (area % root == 0) {
        vector<int> re;
        re.push_back(area / root);
        re.push_back(root);
        return re;
      }
      root--;
    }
  }
};
// @lc code=end
