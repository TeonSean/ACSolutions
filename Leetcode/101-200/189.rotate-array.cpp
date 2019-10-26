/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */
class Solution {
public:
    int gcd(int x, int y)
    {	
        int z = y;
        while(x % y!=0)
        {
            z = x % y;
            x = y;
            y = z;	
        }
        return z;
    }

    void rotate(vector<int>& nums, int k) {
        if (k == 0 || nums.empty()) {
            return;
        }
        int m = gcd(k, nums.size());
        for (int i = 0; i < m; i++) {
            int val = nums[i];
            int next = i + k;
            int cnt_max = nums.size() / m;
            int cnt = 0;
            while (cnt < cnt_max) {
                if (next >= nums.size()) {
                    next %= nums.size();
                }
                swap(nums[next], val);
                next += k;
                cnt++;
            }
        }
    }
};

