/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum=0,left_sum=0,right_sums=0,ans=0;
        for(int i=0;i<nums.size();i++)
            total_sum+=nums[i];
        if(nums.size()==1)
            ans=0;
        else
        {
            for(int i=0;i<nums.size();i++)
            {
                right_sums = total_sum - left_sum - nums[i];
                if(left_sum==right_sums)
                {
                    ans = i;
                    break;
                }
                else if (i!=nums.size()-1)
                    left_sum += nums[i];
            }
        }
        if (right_sums != left_sum)
            ans=-1;
        return ans;
    }
};
// @lc code=end

