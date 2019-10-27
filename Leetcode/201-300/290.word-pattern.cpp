/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */
class Solution {
 public:
  bool wordPattern(string pattern, string str) {
    map<string, char> m;
    set<char> used;
    int index = 0;
    int pindex = 0;
    string word = "";
    while (true) {
      if (index < str.size() && str[index] != ' ') {
        word.push_back(str[index]);
      } else {
        if (word.size() > 0) {
          if (m.count(word)) {
            if (m[word] != pattern[pindex]) {
              return false;
            }
          } else {
            if (used.count(pattern[pindex])) {
              return false;
            }
            used.insert(pattern[pindex]);
            m[word] = pattern[pindex];
          }
          word = "";
          pindex++;
        }
      }
      if (index >= str.size()) {
        break;
      }
      index++;
    }
    return pindex == pattern.size();
  }
};
