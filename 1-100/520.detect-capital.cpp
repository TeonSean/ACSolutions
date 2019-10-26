/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size() <= 1) {
            return true;
        }
        if (word[0] >= 'a' || word[1] >= 'a') {
            for (int i = 1; i < word.size(); i++) {
                if (word[i] < 'a') {
                    return false;
                }
            }
            return true;
        }
        for (int i = 2; i < word.size(); i++) {
            if (word[i] >= 'a') {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

