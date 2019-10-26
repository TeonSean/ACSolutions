/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */
class Solution {
public:

    int binSearchLeft(vector<int>& nums, int target) {
        int begin = 0;
        int end = nums.size();
        while(true) {
            if(begin == end) {
                return begin;
            }
            int cur = (begin + end) / 2;
            if(nums[cur] < target) {
                begin = cur + 1;
                continue;
            }
            else if(nums[cur] == target) {
                if(cur > begin) {
                    if(nums[cur - 1] < target) {
                        return cur;
                    }
                }
                else {
                    return cur;
                }
            }
            end = cur;
        }
    }

    int binSearchRight(vector<int>& nums, int target) {
        int begin = 0;
        int end = nums.size();
        while(true) {
            if(begin == end) {
                return begin;
            }
            int cur = (begin + end) / 2;
            if(nums[cur] > target) {
                end = cur;
                continue;
            }
            else if(nums[cur] == target) {
                if(cur < end - 1) {
                    if(nums[cur + 1] > target) {
                        return cur + 1;
                    }
                }
                else {
                    return cur + 1;
                }
            }
            begin = cur + 1;
        }
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>& searched = nums1;
        int l1 = 0;
        int l2 = 0;
        int r1 = nums1.size();
        int r2 = nums2.size();
        int targetIndex = (r1 + r2) / 2;
        bool needTwo = ((r1 + r2) % 2) == 0;
        while(l1 < r1) {
            int cur = (l1 + r1) / 2;
            int other = binSearchLeft(nums2, nums1[cur]);
            int rank = cur + other;
            if(rank == targetIndex) {
                if(needTwo) {
                    int smaller = max(
                        cur == 0 ? INT_MIN : nums1[cur - 1],
                        other == 0 ? INT_MIN : nums2[other - 1]
                    );
                    return (nums1[cur] + smaller) / 2.0;
                }
                return nums1[cur];
            }
            else if(rank < targetIndex) {
                l1 = cur + 1;
                l2 = other;
            }
            else {
                r1 = cur;
                r2 = other;
            }
        }
        while(true) {
            int cur = (l2 + r2) / 2;
            int other = binSearchRight(nums1, nums2[cur]);
            int rank = cur + other;
            if(rank == targetIndex) {
                if(needTwo) {
                    int smaller = max(
                        cur == 0 ? INT_MIN : nums2[cur - 1],
                        other == 0 ? INT_MIN : nums1[other - 1]
                    );
                    return (nums2[cur] + smaller) / 2.0;
                }
                return nums2[cur];
            }
            else if(rank < targetIndex) {
                l2 = cur + 1;
            }
            else {
                r2 = cur;
            }
        }
    }
};

