/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */
class Solution {
 public:
  struct number {
    char value;
    int cnt;

    number(char value) {
      this->value = value;
      this->cnt = 1;
    }
  };

  string countAndSay(int n) {
    string result = "1";
    stringstream ss;
    for (int i = 1; i < n; i++) {
      queue<number> q;
      q.push(number(result[0]));
      for (int j = 1; j < result.size(); j++) {
        if (q.back().value == result[j]) {
          q.back().cnt++;
        } else {
          q.push(number(result[j]));
        }
      }
      result = "";
      while (q.size()) {
        ss.str("");
        ss << q.front().cnt;
        result += ss.str();
        result += q.front().value;
        q.pop();
      }
    }
    return result;
  }
};
}
;
