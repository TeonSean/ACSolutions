/*
 * @lc app=leetcode id=599 lang=cpp
 *
 * [599] Minimum Index Sum of Two Lists
 */

// @lc code=start
class Solution {
 public:
  vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    unordered_map<string, int> m;
    vector<string> re;
    int min_sum = INT_MAX;
    for (int i = 0; i < list1.size(); i++) {
      m[list1[i]] = i;
    }
    for (int i = 0; i < list2.size(); i++) {
      auto it = m.find(list2[i]);
      if (it == m.end()) {
        continue;
      }
      if (it->second + i < min_sum) {
        min_sum = it->second + i;
        re.clear();
        re.emplace_back(it->first);
      } else if (it->second + i == min_sum) {
        re.emplace_back(it->first);
      }
    }
    return re;
  }
};
// @lc code=end
