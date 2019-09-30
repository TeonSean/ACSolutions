/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) {
            return 0;
        }
        int sum = 0;
        int buy_price = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < prices[i - 1]) {
                sum += prices[i - 1] - buy_price;
                buy_price = prices[i];
            }
        }
        sum += max(prices[prices.size() - 1] - buy_price, 0);
        return sum;
    }
};

