/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */
class Solution {
public:
    bool isHappy(int n) {
        set<int> occurred;
        while (n != 1) {
            occurred.insert(n);
            int m = 0;
            while (n) {
                int mod = n % 10;
                m += mod * mod;
                n /= 10;
            }
            if (occurred.count(m)) {
                return false;
            }
            n = m;
        }
        return true;
    }
};

