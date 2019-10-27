/*
 * @lc app=leetcode id=303 lang=cpp
 *
 * [303] Range Sum Query - Immutable
 */
class NumArray {
 public:
  vector<int> sums;

  NumArray(vector<int>& nums) {
    if (nums.size() == 0) {
      return;
    }
    sums.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++) {
      sums.push_back(sums.back() + nums[i]);
    }
  }

  int sumRange(int i, int j) { return sums[j] - (i == 0 ? 0 : sums[i - 1]); }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
