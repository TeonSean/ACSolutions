/*
 * @lc app=leetcode id=482 lang=cpp
 *
 * [482] License Key Formatting
 */

// @lc code=start
class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string re;
        int read = S.size() - 1;
        int k = 0;
        while (read >= 0) {
            if (S[read] != '-') {
                re += S[read] > 96 ? S[read] - 32 : S[read];
                k++;
                if (k == K) {
                    k = 0;
                    re += '-';
                }
            }
            read--;
        }
        if (re.size() > 0 && re.back() == '-') {
            re.pop_back();
        }
        return string(re.rbegin(), re.rend());
    }
};
// @lc code=end

