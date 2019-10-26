/*
 * @lc app=leetcode id=476 lang=cpp
 *
 * [476] Number Complement
 */

// @lc code=start
class Solution {
public:
    int findComplement(int num) {
        unsigned int re = ~num;
        unsigned int n = num == 0 ? 1 : 0;
        while (num) {
            n <<= 1;
            n |= 1u;
            num >>= 1;
        }
        return re & n;
    }
};
// @lc code=end

