/*
 * @lc app=leetcode id=521 lang=cpp
 *
 * [521] Longest Uncommon Subsequence I 
 */

// @lc code=start
class Solution {
public:
    int findLUSlength(string a, string b) {
        if (a.size() != b.size()) {
            return max(a.size(), b.size());
        }
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                return a.size();
            }
        }
        return -1;
    }
};
// @lc code=end

