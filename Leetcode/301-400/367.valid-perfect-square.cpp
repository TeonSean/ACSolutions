/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */
class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1 || num == 4) {
            return true;
        }
        long long begin = 3;
        long long end = num / 3 + 1;
        long long mid = (begin + end) / 2;
        while (begin < end) {
            long long p = mid * mid;
            if (p == num) {
                return true;
            }
            if (p < num) {
                begin = mid + 1;
            }
            else {
                end = mid;
            }
            mid = (begin + end) / 2;
        }
        return false;
    }
};

