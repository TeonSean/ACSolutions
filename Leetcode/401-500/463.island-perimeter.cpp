/*
 * @lc app=leetcode id=463 lang=cpp
 *
 * [463] Island Perimeter
 */

// @lc code=start
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int cnt = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 0) {
                    continue;
                }
                if (i == 0 || grid[i - 1][j] == 0) {
                    cnt++;
                }
                if (i == grid.size() - 1 || grid[i + 1][j] == 0) {
                    cnt++;
                }
                if (j == 0 || grid[i][j - 1] == 0) {
                    cnt++;
                }
                if (j == grid[0].size() - 1 || grid[i][j + 1] == 0) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
// @lc code=end

