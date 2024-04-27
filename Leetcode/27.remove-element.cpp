/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int num_ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if (nums[i]!=val)
            {
                nums[num_ans]=nums[i];
                num_ans++;
            }
        }
        return num_ans;

    }
};
// @lc code=end

