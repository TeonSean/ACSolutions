/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> index;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if(index.count(diff)) {
                result.push_back(index[diff]);
                result.push_back(i);
                break;
            }
            else {
                index[nums[i]] = i;
            }
        }
        return result;
    }
};

