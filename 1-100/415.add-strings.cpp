/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        auto it1 = num1.rbegin();
        auto it2 = num2.rbegin();
        string re = "";
        int next = 0;
        while (true) {
            if (it1 == num1.rend()) {
                if (it2 == num2.rend()) {
                    break;
                }
                next += *it2 - '0';
                it2++;
            }
            else {
                next += *it1 - '0';
                it1++;
                if (it2 != num2.rend()) {
                    next += *it2 - '0';
                    it2++;
                }
            }
            if (next >= 10) {
                re += '0' + next - 10;
                next = 1;
            }
            else {
                re += '0' + next;
                next = 0;
            }
        }
        if (next == 1) {
            re += '1';
        }
        return string(re.rbegin(), re.rend());
    }
};
// @lc code=end

