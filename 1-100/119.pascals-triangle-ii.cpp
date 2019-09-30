/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(++rowIndex, 1);
        if (rowIndex < 3) {
            return row;
        }
        int mid = (rowIndex) / 2;
        for (int i = 1; i <= mid; i++) {
            row[i] = (long long)row[i - 1] * (rowIndex - i) / i;
        }
        for (int i = 1; i < mid; i++) {
            row[rowIndex - 1 - i] = row[i];
        }
        return row;
    }
};

