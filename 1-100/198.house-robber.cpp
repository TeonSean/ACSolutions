/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */
class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        if (nums.size() == 1) {
            return nums[0];
        }
        vector<int> rob(nums.size(), 0);
        vector<int> omit(nums.size(), 0);
        rob[0] = nums[0];
        rob[1] = nums[1];
        omit[0] = 0;
        omit[1] = nums[0];
        for (int i = 2; i < nums.size(); i++) {
            rob[i] = nums[i] + max(rob[i - 2], omit[i - 2]);
            omit[i] = max(rob[i - 2], omit[i - 2] + nums[i - 1]);
        }
        return max(rob.back(), omit.back());
    }
};

