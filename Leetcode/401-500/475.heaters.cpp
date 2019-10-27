/*
 * @lc app=leetcode id=475 lang=cpp
 *
 * [475] Heaters
 */

// @lc code=start
class Solution {
 public:
  int findRadius(vector<int>& houses, vector<int>& heaters) {
    sort(heaters.begin(), heaters.end());
    int radius = 0;
    for (int pos : houses) {
      auto it = lower_bound(heaters.begin(), heaters.end(), pos);
      if (it == heaters.begin()) {
        radius = max(heaters.front() - pos, radius);
      } else if (it == heaters.end()) {
        radius = max(pos - heaters.back(), radius);
      } else {
        radius =
            max(radius, min(heaters[distance(heaters.begin(), it)] - pos,
                            pos - heaters[distance(heaters.begin(), it) - 1]));
      }
    }
    return radius;
  }
};
// @lc code=end
