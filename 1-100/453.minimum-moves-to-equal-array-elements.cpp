/*
 * @lc app=leetcode id=453 lang=cpp
 *
 * [453] Minimum Moves to Equal Array Elements
 */

// @lc code=start
class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long cnt = 0;
        int n0 = INT_MAX;
        for (int n: nums) {
            cnt += n;
            n0 = min(n0, n);
        }
        return cnt - nums.size() * n0;
    }
};
// @lc code=end

