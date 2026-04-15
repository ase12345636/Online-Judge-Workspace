/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution
{
public:
    int reverseBits(int n)
    {
        int answer = 0;
        for (int i = 0; i < 32; i++)
        {
            answer <<= 1;
            answer |= (n & 1);
            n >>= 1;
        }
        return answer;
    }
};
// @lc code=end
