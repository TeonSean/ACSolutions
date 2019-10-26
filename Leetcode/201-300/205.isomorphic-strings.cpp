/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> m;
        set<char> v;
        for (int i = 0; i < s.size(); i++) {
            if (m.count(s[i])) {
                if (t[i] != m[s[i]]) {
                return false;
                }
            }
            else {
                if (v.count(t[i])) {
                    return false;
                }
                m[s[i]] = t[i];
                v.insert(t[i]);
            }
        }
        return true;
    }
};

