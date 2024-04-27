/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_len=0;
        string ans;
        min_len=strs[0].length();
        for(int i=1;i<strs.size();i++)
        {
            if (min_len>strs[i].length())
                min_len=strs[i].length();
        }

        for(int i=0;i<min_len;i++)
        {
            bool flag=true;
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j-1][i]!=strs[j][i])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                ans += strs[0][i];
            else
                break;
        }
        return ans;
    }
};
// @lc code=end

