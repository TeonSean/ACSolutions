/*
 * @lc app=leetcode id=434 lang=cpp
 *
 * [434] Number of Segments in a String
 */

// @lc code=start
class Solution {
public:
    int countSegments(string s) {
        bool word_start = 0;
        int index = 0;
        int cnt = 0;
        while (index < s.size()) {
            if (s[index] == ' ') {
                if (word_start) {
                    cnt++;
                }
                word_start = false;
            }
            else
            {
                word_start = true;
            }
            index++;
        }
        return word_start ? cnt + 1 : cnt;
    }
};
// @lc code=end

