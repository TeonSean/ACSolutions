/*
 * @lc app=leetcode id=299 lang=cpp
 *
 * [299] Bulls and Cows
 */
class Solution {
 public:
  string getHint(string secret, string guess) {
    int A = 0;
    int B = 0;
    int s_cnt[10] = {0};
    int g_cnt[10] = {0};
    for (int i = 0; i < secret.size(); i++) {
      if (secret[i] == guess[i]) {
        A++;
        continue;
      }
      s_cnt[secret[i] - '0']++;
      g_cnt[guess[i] - '0']++;
    }
    for (int i = 0; i < 10; i++) {
      B += min(s_cnt[i], g_cnt[i]);
    }
    stringstream ss;
    ss << A << 'A' << B << 'B';
    return ss.str();
  }
};
