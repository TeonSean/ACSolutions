/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        int cnt[26];
        for (auto& i: cnt) {
            i = 0;
        }
        for (auto ch: s) {
            cnt[ch - 'a']++;
        }
        for (auto ch: t) {
            cnt[ch - 'a']--;
        }
        for (auto& i: cnt) {
            if (i) {
                return false;
            }
        }
        return true;
    }
};

