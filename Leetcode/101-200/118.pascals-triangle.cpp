/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */
class Solution {
 public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> tri;
    if (numRows > 0) {
      tri.push_back(vector<int>(1, 1));
    }
    for (int i = 1; i < numRows; i++) {
      tri.push_back(vector<int>(i + 1, 1));
      int prev = i - 1;
      for (int j = 1; j < i; j++) {
        tri[i][j] = tri[prev][j - 1] + tri[prev][j];
      }
    }
    return tri;
  }
};
