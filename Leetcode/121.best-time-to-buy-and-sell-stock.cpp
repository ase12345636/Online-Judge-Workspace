/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int answer = 0;
        int minPrice = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            if (minPrice > prices[i])
                minPrice = prices[i];
            if (prices[i] - minPrice > answer)
                answer = prices[i] - minPrice;
        }
        return answer;
    }
};
// @lc code=end
