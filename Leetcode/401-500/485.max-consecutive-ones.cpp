/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_cnt = 0;
        int cur_cnt = 0;
        for (int n: nums) {
            if (n == 0) {
                max_cnt = max(max_cnt, cur_cnt);
                cur_cnt = 0;
            } else {
                cur_cnt++;
            }
        }
        max_cnt = max(max_cnt, cur_cnt);
        return max_cnt;
    }
};
// @lc code=end

