/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */
class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) {
            return x;
        }
        long long begin = 1;
        long long end = x / 2 + 1;
        while (true) {
            long long mid = (begin + end) / 2;
            long long p = mid * mid;
            long long next_p = p + mid + mid + 1;
            if (p == x) {
                return mid;
            }
            if (p < x) {
                if (next_p > x) {
                    return mid;
                }
                begin = mid + 1;
            }
            else {
                end = mid;
            }
        }
        return 0;
    }
};

