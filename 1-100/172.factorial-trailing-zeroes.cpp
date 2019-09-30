/*
 * @lc app=leetcode id=172 lang=cpp
 *
 * [172] Factorial Trailing Zeroes
 */
class Solution {
public:
    int trailingZeroes(int n) {
        int i = 0;
        long long j = 5;
        while (j <= n) {
            i += n / j;
            j *= 5;
        }
        return i;
    }
};

