/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index = m + n - 1;
        m--; n--;
        while (n >= 0)
        {
            if (m < 0 || nums1[m] < nums2[n])
                nums1[index--] = nums2[n--];
            else
                nums1[index--] = nums1[m--];
        }
    }
};
// @lc code=end

