/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        multiset<int> ms;
        for (auto each: nums1) {
            ms.insert(each);
        }
        vector<int> re;
        for (auto each: nums2) {
            if (ms.count(each)) {
                re.push_back(each);
                ms.erase(each);
            }
        }
        return re;
    }
};

