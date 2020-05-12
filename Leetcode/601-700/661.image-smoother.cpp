/*
 * @lc app=leetcode id=661 lang=cpp
 *
 * [661] Image Smoother
 */

// @lc code=start
class Solution {
 public:
  vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
    vector<vector<int>> re(M.size(), vector<int>(M[0].size(), 0));
    for (int i = 0; i < M.size(); i++) {
      for (int j = 0; j < M[0].size(); j++) {
        int sum = M[i][j];
        int cnt = 1;
        if (i != 0) {
          cnt++;
          sum += M[i - 1][j];
          if (j != 0) {
            cnt++;
            sum += M[i - 1][j - 1];
          }
          if (j != M[0].size() - 1) {
            cnt++;
            sum += M[i - 1][j + 1];
          }
        }
        if (j != 0) {
          cnt++;
          sum += M[i][j - 1];
        }
        if (j != M[0].size() - 1) {
          cnt++;
          sum += M[i][j + 1];
        }
        if (i != M.size() - 1) {
          cnt++;
          sum += M[i + 1][j];
          if (j != 0) {
            cnt++;
            sum += M[i + 1][j - 1];
          }
          if (j != M[0].size() - 1) {
            cnt++;
            sum += M[i + 1][j + 1];
          }
        }
        re[i][j] = floor((double)sum / cnt);
      }
    }
    return re;
  }
};
// @lc code=end
