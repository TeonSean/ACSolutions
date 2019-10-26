/*
 * @lc app=leetcode id=507 lang=cpp
 *
 * [507] Perfect Number
 */

// @lc code=start
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        if (num == 1) {
            return false;
        }
        int root = sqrt(num);
        for (int i = 2; i <= root; i++) {
            int other = num / i;
            if (other * i == num) {
                sum += other;
                sum += i;
            }
        }
        return sum + 1 == num;
    }
};
// @lc code=end

