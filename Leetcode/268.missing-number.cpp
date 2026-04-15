/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > n)
                n = nums[i];
        }
        vector<bool> check(n + 1);
        for (int i = 0; i < nums.size(); i++)
            check[nums[i]] = 1;
        for (int i = 0; check.size(); i++)
            if (check[i] == false)
                return i;
        return n + 1;
    }
};
// @lc code=end
