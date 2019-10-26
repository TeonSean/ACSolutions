/*
 * @lc app=leetcode id=506 lang=cpp
 *
 * [506] Relative Ranks
 */

// @lc code=start
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        using pair = pair<int, int>;
        vector<string> re(nums.size());
        vector<pair> pairs;
        for (int i = 0; i < nums.size(); i++) {
            pairs.emplace_back(nums[i], i);
        }
        sort(pairs.begin(), pairs.end(), [&](const pair& a, const pair& b)->bool{
            return a.first > b.first;
        });
        for (int  i = 0; i < pairs.size(); i++) {
            re[pairs[i].second] = to_string(i + 1);
        }
        if (re.size() >= 1) {
            re[pairs[0].second] = "Gold Medal";
        }
        if (re.size() >= 2) {
            re[pairs[1].second] = "Silver Medal";
        }
        if (re.size() >= 3) {
            re[pairs[2].second] = "Bronze Medal";
        }
        return re;
    }
};
// @lc code=end

