/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */
#include <vector>

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slot = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[slot++] = nums[i];
            }
        }
        
        return slot;
    }
};

