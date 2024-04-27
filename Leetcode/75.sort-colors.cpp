/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        bool flag=false;
        do
        {
            flag=false;
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]>nums[i+1])
                {
                    int temp = nums[i];
                    nums[i]=nums[i+1];
                    nums[i+1]=temp;
                    flag=true;
                }
            }
        }while(flag);
    }
};
// @lc code=end

