/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i=0,j=needle.length();i<=haystack.length()-j;i++)
        {
            if (needle.length()>haystack.length())
                return -1;
            else if(haystack.substr(i,j)==needle)
                return i;
        }
        return -1;
    }
};
// @lc code=end

