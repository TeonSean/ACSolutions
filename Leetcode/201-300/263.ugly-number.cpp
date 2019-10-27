/*
 * @lc app=leetcode id=263 lang=cpp
 *
 * [263] Ugly Number
 */
class Solution {
 public:
  bool isUgly(int num) {
    for (int i = 6; i >= 2 && num; i--) {
      while (num % i == 0) {
        num /= i;
      }
    }
    return num == 1;
  }
};
