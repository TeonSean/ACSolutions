/*
 * @lc app=leetcode id=541 lang=cpp
 *
 * [541] Reverse String II
 */

// @lc code=start
class Solution {
public:
    string reverseStr(string s, int k) {
        bool reverse = true;
        int start = 0;
        int diff = 0;
        while (start < s.size()) {
            diff = min(k, (int)s.size() - start);
            int bound = diff / 2;
            if (reverse) {
                for (int i = 0; i < bound; i++) {
                    swap(s[start + i], s[start + diff - 1 - i]);
                }
            }
            reverse = !reverse;
            start += diff;
        }
        return s;
    }
};
// @lc code=end

