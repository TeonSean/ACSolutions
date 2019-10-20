/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> re;
        stringstream ss;
        for (int i = 1; i <= n; i++) {
            ss.str("");
            bool fb = false;
            if (i % 3 == 0) {
                ss << "Fizz";
                fb = true;
            }
            if (i % 5 == 0) {
                ss << "Buzz";
                fb = true;
            }
            if (!fb) {
                ss << i;
            }
            re.push_back(ss.str());
        }
        return re;
    }
};
// @lc code=end

