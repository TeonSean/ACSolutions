/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */
class Solution {
 public:
  string reverseVowels(string s) {
    set<char> vowel;
    vowel.insert('a');
    vowel.insert('e');
    vowel.insert('i');
    vowel.insert('o');
    vowel.insert('u');
    vowel.insert('A');
    vowel.insert('E');
    vowel.insert('I');
    vowel.insert('O');
    vowel.insert('U');
    int head = 0, end = s.size() - 1;
    while (head < end) {
      while (!vowel.count(s[head])) {
        head++;
        if (head >= end) {
          break;
        }
      }
      if (head >= end) {
        break;
      }
      while (!vowel.count(s[end])) {
        end--;
        if (head >= end) {
          break;
        }
      }
      if (head >= end) {
        break;
      }
      swap(s[head], s[end]);
      head++;
      end--;
    }
    return s;
  }
};
