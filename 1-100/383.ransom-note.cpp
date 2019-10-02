/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int needed[26] = {0};
        for (auto each: ransomNote) {
            needed[each - 'a']++;
        }
        for (auto each: magazine) {
            needed[each - 'a']--;
        }
        for (auto each: needed) {
            if (each > 0) {
                return false;
            }
        }
        return true;
    }
};

