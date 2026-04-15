/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution
{
public:
    int hammingWeight(int n)
    {
        int counter = 0;
        while (n > 0)
        {
            if (n & 1)
                counter++;
            n >>= 1;
        }
        return counter;
    }
};
// @lc code=end
