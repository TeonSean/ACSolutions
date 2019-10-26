/*
 * @lc app=leetcode id=447 lang=cpp
 *
 * [447] Number of Boomerangs
 */

// @lc code=start
class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int cnt = 0;
    	for(int i = 0; i < points.size(); i++) {
    		map<int, int> m;
    		for(int j = 0; j < points.size(); j++) {
        		int d1 = points[i][0] - points[j][0];
        		int d2 = points[i][1] - points[j][1];
        		int d = d1 * d1 + d2 * d2;
        		m[d]++;
        	}
        	for(auto i = m.begin(); i != m.end(); i++) {
	        	cnt += (i->second - 1) * i->second;
	        }
    	}
        return cnt;
    }
};
// @lc code=end

