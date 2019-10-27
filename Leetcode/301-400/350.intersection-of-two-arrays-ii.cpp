/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */
class Solution {
 public:
  vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    multiset<int> ms;
    for (auto each : nums1) {
      ms.insert(each);
    }
    vector<int> re;
    for (auto each : nums2) {
      if (ms.count(each)) {
        re.push_back(each);
        ms.erase(ms.find(each));
      }
    }
    return re;
  }
};
