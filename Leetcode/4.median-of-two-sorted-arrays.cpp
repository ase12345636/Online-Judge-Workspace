/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        vector<int> merge;
        for(int i = 0; i < nums1.size(); i++)
            merge.push_back(nums1[i]);
        for(int i = 0; i < nums2.size(); i++)
            merge.push_back(nums2[i]);
        sort(merge.begin(), merge.end());
        if(merge.size() % 2 == 0)
            ans = (merge[merge.size() / 2] + merge[merge.size() / 2 - 1]) / 2.0;
        else
            ans = merge[merge.size() / 2];
        return ans;
    }
};
// @lc code=end

