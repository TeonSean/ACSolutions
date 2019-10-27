/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */
class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int result = 0;
    int min_price = INT_MAX;
    for (auto price : prices) {
      result = max(result, price - min_price);
      min_price = min(min_price, price);
    }
    return result;
  }
};
