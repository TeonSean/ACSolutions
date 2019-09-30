/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; i--) {
            digits[i] += carry;
            if (digits[i] >= 10) {
                digits[i] -= 10;
                carry = 1;
            }
            else {
                carry = 0;
            }
        }
        if (carry) {
            vector<int> re;
            re.push_back(1);
            for (int n: digits) {
                re.push_back(n);
            }
            return re;
        }
        return digits;
    }
};

