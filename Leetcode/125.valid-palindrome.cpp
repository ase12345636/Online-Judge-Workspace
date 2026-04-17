/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution
{
public:
    string transfer(string s)
    {
        string conver = "";
        for (char chr : s)
        {
            if (chr >= 'A' && chr <= 'Z')
            {
                chr -= 'A';
                chr += 'a';
                conver += chr;
            }
            else if ((chr > 'z' || chr < 'a') && (chr < '0' || chr > '9'))
                continue;
            else
                conver += chr;
        }
        return conver;
    }
    bool checker(string s)
    {
        for (int i = 0, j = s.length() - 1; i < s.length(); i++, j--)
        {
            if (s[i] != s[j])
                return false;
        }
        return true;
    }
    bool isPalindrome(string s)
    {
        bool answer;
        s = transfer(s);
        answer = checker(s);
        return answer;
    }
};
// @lc code=end
