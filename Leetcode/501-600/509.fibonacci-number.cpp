/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
 public:
  int fib(int N) {
    if (N == 0) {
      return 0;
    }
    vector<int> f(N + 1);
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= N; i++) {
      f[i] = f[i - 1] + f[i - 2];
    }
    return f[N];
  }
};
// @lc code=end
