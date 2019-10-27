/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input array is sorted
 */
class Solution {
 public:
  int binarySearch(vector<int>& nums, int target, int begin) {
    int end = nums.size();
    while (begin < end) {
      int mid = (begin + end) / 2;
      if (nums[mid] == target) {
        return mid;
      }
      if (nums[mid] > target) {
        end = mid;
      } else {
        begin = mid + 1;
      }
    }
    return -1;
  }

  vector<int> twoSum(vector<int>& numbers, int target) {
    int begin = 0;
    while (true) {
      int index = binarySearch(numbers, target - numbers[begin], begin + 1);
      if (index > 0) {
        vector<int> re;
        re.push_back(begin + 1);
        re.push_back(index + 1);
        return re;
      }
      begin++;
    }
  }
};
