/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cur = 0, cnt = 0;
        while (cur < nums.size()) {
            if (nums[cur] == 0) {
                cnt++;
            }
            else {
                nums[cur - cnt] = nums[cur];
            }
            cur++;
        }
        for (int i = nums.size() - cnt; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

