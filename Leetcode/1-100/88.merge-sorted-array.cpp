/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */
class Solution {
 public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i1 = m - 1;
    int i2 = n - 1;
    int index = m + n - 1;
    while (index >= 0) {
      if (i1 >= 0) {
        if (i2 >= 0 && nums1[i1] < nums2[i2]) {
          nums1[index--] = nums2[i2--];
        } else {
          nums1[index--] = nums1[i1--];
        }
      } else {
        nums1[index--] = nums2[i2--];
      }
    }
  }
};
