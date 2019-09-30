/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */
class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool flag = false;
        if (n <= 0) {
            return false;
        }
        while (n) {
            if (n & 1) {
                if (flag) {
                    return false;
                }
                flag = true;
            }
            n >>= 1;
        }
        return flag;
    }
};

