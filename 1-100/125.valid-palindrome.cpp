/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */
class Solution {
public:
    bool isPalindrome(string s) {
        deque<char> ss;
        for (auto ch: s) {
            if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                ss.push_back(ch);
            }
        }
        while (ss.size() > 1) {
            if (ss.front() == ss.back() || (ss.front() >= '9' && abs(ss.front() - ss.back()) == 32)) {
                ss.pop_front();
                ss.pop_back();
            }
            else {
                return false;
            }
        }
        return true;
    }
};

