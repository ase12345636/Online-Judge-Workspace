/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        int now = 1, prev = 1;
        if (n == 0 | n == 1)
            return 1;
        for(int i = 2; i <= n; i++)
        {
            now = prev + now;
            prev = now - prev;
        }
        return now;
    }
};
// @lc code=end

