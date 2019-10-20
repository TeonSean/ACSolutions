/*
 * @lc app=leetcode id=443 lang=cpp
 *
 * [443] String Compression
 */

// @lc code=start
class Solution {
public:
    int compress(vector<char>& chars) {
        int start = 0, cnt = 1, write = 0;
        for (int i = 1; i <= chars.size(); i++) {
            if (i < chars.size() && chars[i] == chars[i - 1]) {
                cnt++;
            }
            else {
                chars[write++] = chars[start];
                if(cnt > 1) {
        			if(cnt >= 1000) {
        				chars[write++] = (cnt / 1000) + '0';
        			}
        			if(cnt >= 100) {
        				chars[write++] = (cnt % 1000) / 100 + '0';
        			}
        			if(cnt >= 10) {
        				chars[write++] = (cnt % 100) / 10 + '0';
        			}
        			chars[write++] = (cnt % 10) + '0';
        		}
                start = i;
                cnt = 1;
            }
        }
        return write;
    }
};
// @lc code=end

