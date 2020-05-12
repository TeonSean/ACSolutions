/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

// @lc code=start
class Solution {
 public:
  bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    if (n == 0) {
      return true;
    }
    if (flowerbed.size() < 2 * n - 1) {
      return false;
    }
    int cnt = 0;
    for (int i = 0; i < flowerbed.size();) {
      if (flowerbed[i] == 1) {
        i += 2;
      } else {
        if ((i == 0 || flowerbed[i - 1] == 0) &&
            (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
          cnt++;
          if (cnt == n) {
            return true;
          }
          i += 2;
        } else {
          i++;
        }
      }
    }
    return false;
  }
};
// @lc code=end
