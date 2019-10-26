/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */
class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> counted(n + 1, false);
        for (long long i = 2; i < n; i++) {
            if (counted[i]) {
                continue;
            }
            count++;
            for (long long j = i * i; j < n; j += i) {
                counted[j] = true;
            }
        }
        return count;
    }
};

