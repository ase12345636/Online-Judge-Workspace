/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size(), middle = 0, ans=0;
        while(1)
        {
            middle = (left + right) / 2;
            if(nums[middle] == target)
            {
                ans = middle;
                break;
            }
            else if ((right - left) <= 1)
            {
                if (nums[middle] < target)
                    ans = middle + 1;
                else
                    ans = middle;
                break;
            }
            else if (nums[middle] > target)
                right = middle;
            else
                left = middle;
        }
        return ans;
    }
};
// @lc code=end

