/*
 * @lc app=leetcode id=594 lang=cpp
 *
 * [594] Longest Harmonious Subsequence
 */

// @lc code=start
class Solution {
 public:
  int findLHS(vector<int>& nums) {
    // if (nums.empty()) {
    //   return 0;
    // }
    // map<int, int> cnt;
    // for (int n : nums) {
    //   cnt[n]++;
    // }
    // int max_length = 0;
    // int prev_key = cnt.begin()->first;
    // int prev_cnt = cnt.begin()->second;
    // for (auto it = ++cnt.begin(); it != cnt.end(); it++) {
    //   if (it->first - prev_key == 1) {
    //     max_length = max(max_length, it->second + prev_cnt);
    //   }
    //   prev_key = it->first;
    //   prev_cnt = it->second;
    // }
    // return max_length;
    sort(nums.begin(), nums.end());
    vector<int> uniqued(nums.size());
    int bound = distance(uniqued.begin(), unique_copy(nums.begin(), nums.end(),
                                                      uniqued.begin()));
    int max_length = 0;
    for (int i = 1; i < bound; i++) {
      if (uniqued[i] - uniqued[i - 1] == 1) {
        max_length =
            max(max_length,
                (int)(upper_bound(nums.begin() + i, nums.end(), uniqued[i]) -
                      lower_bound(nums.begin() + i - 1, nums.end(),
                                  uniqued[i - 1])));
      }
    }
    return max_length;
  }
};
// @lc code=end
