/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */
class Solution {
public:
    char findTheDifference(string s, string t) {
        int cnt[26] = {0};
        for (char each: s) {
            cnt[each - 'a']++;
        }
        for (char each: t) {
            cnt[each - 'a']--;
        }
        for (int i = 0; ; i++) {
            if (cnt[i] == -1) {
                return 'a' + i;
            }
        }
    }
};

