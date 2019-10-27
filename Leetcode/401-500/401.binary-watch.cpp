/*
 * @lc app=leetcode id=401 lang=cpp
 *
 * [401] Binary Watch
 */
class Solution {
 public:
  void getPossibleNumber(int cur_sum, int cur_weight, int left_number,
                         int max_weight, vector<int>& v) {
    if (left_number == 0) {
      v.push_back(cur_sum);
      return;
    }
    if (cur_weight > max_weight) {
      return;
    }
    getPossibleNumber(cur_sum + cur_weight, cur_weight * 2, left_number - 1,
                      max_weight, v);
    getPossibleNumber(cur_sum, cur_weight * 2, left_number, max_weight, v);
  }

  vector<string> readBinaryWatch(int num) {
    if (num > 10) {
      return vector<string>();
    }
    vector<string> re;
    int hour_max = min(num, 4);
    for (int i = 0; i <= hour_max; i++) {
      vector<int> possible_hour;
      vector<int> possible_minute;
      getPossibleNumber(0, 1, i, 8, possible_hour);
      getPossibleNumber(0, 1, num - i, 32, possible_minute);
      stringstream ss;
      for (auto h : possible_hour) {
        if (h >= 12) {
          continue;
        }
        for (auto m : possible_minute) {
          if (m >= 60) {
            continue;
          }
          ss.str("");
          ss << h << ":" << (m < 10 ? "0" : "") << m;
          re.push_back(ss.str());
        }
      }
    }
    return re;
  }
};
