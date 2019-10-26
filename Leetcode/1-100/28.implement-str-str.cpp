/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) {
            return 0;
        }
        int* prev = new int[needle.size() + 1];
        prev[0] = prev[1] = 0;
        int needleIndex = 0;
        for(int i = 2; i < needle.size();) {
            if(needle[i - 1] == needle[needleIndex]) {
                prev[i++] = ++needleIndex;
            }
            else if(needleIndex == 0) {
                prev[i++] = 0;
            }
            else {
                needleIndex = prev[needleIndex];
            }
        }
        needleIndex = 0;
        for(int i = 0; i < haystack.size();) {
            if(haystack[i] == needle[needleIndex]) {
                i++;
                needleIndex++;
                if(needleIndex == needle.size()) {
                    return i - needleIndex;
                }
            }
            else if(needleIndex == 0) {
                i++;
            }
            else {
                needleIndex = prev[needleIndex];
            }
        }
        return -1;
    }
};

