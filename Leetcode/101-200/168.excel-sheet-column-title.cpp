/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */
class Solution {
public:
    string convertToTitle(int n) {
        stack<int> s;
        string str;
        while (true) {
            int mod = n % 26;
            if (mod == 0) {
                mod = 26;
            }
            s.push('A' + mod - 1);
            n -= mod;
            if (n > 0) {
                n /= 26;
            }
            else {
                break;
            }
        }
        while (s.size()) {
            str += s.top();
            s.pop();
        }
        return str;
    }
};

