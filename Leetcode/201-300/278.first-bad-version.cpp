/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
 public:
  bool isBad(long long index, map<long long, bool>& is_bad) {
    if (is_bad.count(index)) {
      return is_bad[index];
    }
    bool re = isBadVersion(index);
    is_bad[index] = re;
    return re;
  }

  int firstBadVersion(int n) {
    long long begin = 1, end = (long long)n + 1, mid = (begin + end) / 2;
    map<long long, bool> is_bad;
    while (true) {
      if (isBad(mid, is_bad)) {
        if (mid == 0 || !isBad(mid - 1, is_bad)) {
          return mid;
        }
        end = mid;
      } else {
        begin = mid + 1;
      }
      mid = (begin + end) / 2;
    }
  }
};
