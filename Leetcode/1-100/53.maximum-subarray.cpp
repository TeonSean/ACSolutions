/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int sum = nums[0];
        int largest_sum = sum;
        int small = min(0, sum);
        for (int i = 1; i < nums.size(); i++) {
            sum += nums[i];
            largest_sum = max(largest_sum, nums[i]);
            largest_sum = max(largest_sum, sum - small);
            small = min(small, sum);
        }
        return largest_sum;
    }
};

