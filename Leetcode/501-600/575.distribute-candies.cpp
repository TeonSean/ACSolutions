/*
 * @lc app=leetcode id=575 lang=cpp
 *
 * [575] Distribute Candies
 */

// @lc code=start
class Solution {
public:
  int distributeCandies(vector<int> &candies) {
    bitset<200001> hash;
    for (int i : candies) {
      hash.set(i + 100000);
    }
    return min(hash.count(), candies.size() / 2);
  }
};
// @lc code=end
