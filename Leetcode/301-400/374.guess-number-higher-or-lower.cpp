/*
 * @lc app=leetcode id=374 lang=cpp
 *
 * [374] Guess Number Higher or Lower
 */
// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        long long begin = 1, end = (long long)n + 1, mid = (begin + end) / 2;
        while (true) {
            int re = guess(mid);
            if (re == 0) {
                return mid;
            }
            if (re > 0) {
                begin = mid + 1;
            }
            else {
                end = mid;
            }
            mid = (begin + end) / 2;
        }
    }
};

