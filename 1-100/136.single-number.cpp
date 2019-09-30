/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            n ^= nums[i];
        }
        return n;
    }
};

