/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */
class Solution {
 public:
  bool isPalindrome(int x) {
    if (x < 0) {
      return false;
    }
    int small = 1, large = 1;
    while ((x / large) >= 10) {
      large *= 10;
    }
    while (small < large) {
      int right = (x / small) % 10;
      int left = (x / large) % 10;
      if (left != right) {
        return false;
      }
      small *= 10;
      large /= 10;
    }
    return true;
  }
};
