/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int plus = 1;
        vector<int> ans;
        for(int i = digits.size() - 1; i >= 0; i--)
        {
            digits[i] += plus;
            plus = digits[i] / 10;
            digits[i] %= 10;
        }
        if (plus != 0)
            ans.push_back(plus);
        for(int i = 0; i < digits.size(); i++)
            ans.push_back(digits[i]);
        return ans;
    }
};
// @lc code=end

