/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        int ans = 0;
        if (x == 0)
            ans = 0;
        else if (x == 1)
            ans = 1;
        else if (x == 2)
            ans = 1;
        else
        {
            for(long i = 0 ; i < x ;i ++)
            {
                if (i * i > x)
                {
                    ans = i - 1;
                    break;
                }
                else if(i * i == x)
                {
                    ans = i;
                    break;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

