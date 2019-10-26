/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int re = 0;
        uint32_t m = 1 << 31;
        for (uint32_t i = 1; ; i <<= 1) {
            if (n & i) {
                re++;
            }
            if (i == m) {
                break;
            }
        }
        return re;
    }
};

