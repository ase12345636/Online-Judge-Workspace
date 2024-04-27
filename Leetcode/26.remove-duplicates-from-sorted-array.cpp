/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int num_ans=0;
        for(int i=1;i<nums.size();i++)
        {
            if (nums[num_ans]!=nums[i])
            {
                num_ans++;
                nums[num_ans]=nums[i];
            }
        }
        num_ans++;
        return num_ans;
    }
};
// @lc code=end

