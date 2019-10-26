/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */
class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        int length = max(a.size(), b.size());
        stack<int> s;
        for (int i = 0; i < length; i++) {
            int n = (i >= a.size() ? 0 : a[a.size() - 1 - i] - '0') + 
                    (i >= b.size() ? 0 : b[b.size() - 1 - i] - '0') + 
                    carry;
            if (n >= 2) {
                n -= 2;
                carry = 1;
            }
            else {
                carry = 0;
            }
            s.push(n);
        }
        if (carry) {
            s.push(1);
        }
        string re = "";
        while (s.size()) {
            re += s.top() + '0';
            s.pop();
        }
        return re;
    }
};

