/*
 * @lc app=leetcode id=1480 lang=cpp
 *
 * [1480] Running Sum of 1d Array
 */

// @lc code=start
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int plus_temp=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            plus_temp=0;
            for(int j=0;j<=i;j++)
            {
                plus_temp+=nums[j];
            }
            ans.push_back(plus_temp);
        }
        return ans;
    }
};
// @lc code=end

