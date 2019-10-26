/*
 * @lc app=leetcode id=405 lang=cpp
 *
 * [405] Convert a Number to Hexadecimal
 */
class Solution {
public:
    string toHex(int num) {
        if (num == 0) {
            return "0";
        }
        long long n = num > 0 ? num : 4294967296 + num;
        string reversed = "";
        while (n) {
            int last = n & 15;
            n >>= 4;
            reversed += last < 10 ? ('0' + last) : ('a' + last - 10);
        }
        return string(reversed.rbegin(), reversed.rend());
    }
};

