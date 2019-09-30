/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t re = 0;
        uint32_t left = 1 << 31;
        uint32_t right = 1;
        while (left > right) {
            re |= n & left ? right : 0;
            re |= n & right ? left : 0;
            left >>= 1;
            right <<= 1;
        }
        return re;
    }
};

