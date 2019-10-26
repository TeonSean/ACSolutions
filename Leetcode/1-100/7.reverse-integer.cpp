/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */
class Solution {
public:
    int reverse(int x) {
        long result = 0, original = x;
        bool negative = original < 0;
        if(negative) {
            original = -original;
        }
        while(original) {
            result *= 10;
            result += original % 10;
            original /= 10;
        }
        if(negative) {
            return -result < INT_MIN ? 0 : -result;
        }
        return result > INT_MAX ? 0 : result;
    }
};

