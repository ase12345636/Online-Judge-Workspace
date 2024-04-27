/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int ans=0,transfor[15]={};
        for(int i=0;i<s.length();i++)
        {
            switch (s[i])
            {
            case 'M':
                transfor[i]=1000;
                break;
            case 'D':
                transfor[i]=500;
                break;
            case 'C':
                transfor[i]=100;
                break;
            case 'L':
                transfor[i]=50;
                break;
            case 'X':
                transfor[i]=10;
                break;
            case 'V':
                transfor[i]=5;
                break;
            case 'I':
                transfor[i]=1;
                break;
            default:
                break;
            }
            if (s.length() != 1)
            {
                if (i==0)
                    continue;
                else
                    ans += transfor[i] > transfor[i-1] ? -1 *transfor[i-1] : transfor[i-1];
            }
            if (i == s.length() -1 || s.length() == 1)
                ans += transfor [i];
        }
        return ans;
    }
};
// @lc code=end

