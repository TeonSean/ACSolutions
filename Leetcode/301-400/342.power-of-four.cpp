/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */
class Solution {
public:
    bool isPowerOfFour(int num) {
        return fmod(log10(num) / log10(4), 1) == 0;
    }
};

