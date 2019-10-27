/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
 public:
  vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<pair<int, int>> pairs;
    for (size_t i = 0; i < nums2.size(); i++) {
      pairs.push_back(make_pair(nums2[i], i));
    }
    sort(pairs.begin(), pairs.end(),
         [](const pair<int, int>& a, const pair<int, int>& b) -> bool {
           return a.first < b.first;
         });
    vector<int> re;
    for (int i = 0; i < nums1.size(); i++) {
      auto it = lower_bound(pairs.begin(), pairs.end(), nums1[i],
                            [&](const pair<int, int>& a, const int& b) -> bool {
                              return a.first < b;
                            });
      int j;
      for (j = (*it).second; j < nums2.size(); j++) {
        if (nums2[j] > nums1[i]) {
          re.push_back(nums2[j]);
          break;
        }
      }
      if (j == nums2.size()) {
        re.push_back(-1);
      }
    }
    return re;
  }
};
// @lc code=end
