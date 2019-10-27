/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */
class Solution {
 public:
  bool isValid(string s) {
    stack<char> lefts;
    for (char ch : s) {
      switch (ch) {
        case '(':
        case '{':
        case '[':
          lefts.push(ch);
          break;
        case ')':
          if (!lefts.empty() && lefts.top() == '(') {
            lefts.pop();
            break;
          }
          return false;
        case '}':
          if (!lefts.empty() && lefts.top() == '{') {
            lefts.pop();
            break;
          }
          return false;
        case ']':
          if (!lefts.empty() && lefts.top() == '[') {
            lefts.pop();
            break;
          }
          return false;
      }
    }
    return lefts.empty();
  }
};
