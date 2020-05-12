class Solution {
 public:
  int countBinarySubstrings(string s) {
    if (s.empty()) {
      return 0;
    }
    int ret = 0;
    int prev_cnt = 0;
    int cur_cnt = 0;
    char cur_val = s[0];
    for (char c : s) {
      if (c != cur_val) {
        prev_cnt = cur_cnt;
        cur_val = c;
        cur_cnt = 1;
      } else {
        cur_cnt++;
      }
      if (prev_cnt >= cur_cnt) {
        ret++;
      }
    }
    return ret;
  }
};