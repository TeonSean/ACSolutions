/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */
class Solution {
 public:
  int romanToInt(string s) {
    int order[128] = {0};
    order['I'] = 1;
    order['V'] = 5;
    order['X'] = 10;
    order['L'] = 50;
    order['C'] = 100;
    order['D'] = 500;
    order['M'] = 1000;
    int result = 0;
    for (int i = 0; i < s.size(); i++) {
      if (i < s.size() - 1 && order[s[i]] < order[s[i + 1]]) {
        result += (order[s[i + 1]] - order[s[i]]);
        i++;
      } else {
        result += order[s[i]];
      }
    }
    return result;
  }
};
