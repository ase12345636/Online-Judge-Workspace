/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        bool ans=true;
        vector<char> check;
        for(int i=0;i<s.length();i++)
        {
            if (s[i]=='(' || s[i]=='[' || s[i]=='{')
                check.push_back(s[i]);
            else
            {
                if (check.size()<1)
                {
                    ans=false;
                    break;
                }
                else
                {
                    switch (s[i])
                    {
                    case ')':
                        if(check[check.size()-1]!='(')
                        {
                            ans=false;
                            break;
                        }
                        else
                            check.pop_back();
                        break;
                    case ']':
                        if(check[check.size()-1]!='[')
                        {
                            ans=false;
                            break;
                        }
                        else
                            check.pop_back();
                        break;
                    case '}':
                        if(check[check.size()-1]!='{')
                        {
                            ans=false;
                            break;
                        }
                        else
                            check.pop_back();
                        break;
                    default:
                        break;
                    }
                }
            }
        }
        if(check.size()!=0)
            ans=false;
        return ans;
    }
};
// @lc code=end

