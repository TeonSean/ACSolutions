/*
 * @lc app=leetcode id=500 lang=cpp
 *
 * [500] Keyboard Row
 */

// @lc code=start
class Solution {
 public:
  vector<string> findWords(vector<string>& words) {
    set<char> row1;
    set<char> row2;
    set<char> row3;
    for (char ch : "qwertyuiopQWERTYUIOP") {
      row1.insert(ch);
    }
    for (char ch : "asdfghjklASDFGHJKL") {
      row2.insert(ch);
    }
    for (char ch : "zxcvbnmZXCVBNM") {
      row3.insert(ch);
    }
    vector<string> re;
    for (const string& str : words) {
      bool ok = true;
      if (row1.count(str[0]) != 0) {
        for (char ch : str) {
          if (row1.count(ch) == 0) {
            ok = false;
            break;
          }
        }
      } else if (row2.count(str[0]) != 0) {
        for (char ch : str) {
          if (row2.count(ch) == 0) {
            ok = false;
            break;
          }
        }

      } else if (row3.count(str[0]) != 0) {
        for (char ch : str) {
          if (row3.count(ch) == 0) {
            ok = false;
            break;
          }
        }
      }
      if (ok) {
        re.push_back(str);
      }
    }
    return re;
  }
};
// @lc code=end
