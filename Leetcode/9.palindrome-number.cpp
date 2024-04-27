/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        bool ans = true;
        int len=0;
        string str_input;
        str_input = to_string(x);
        len=str_input.length();
        for (int i=0;i<len/2;i++)
        {
            if(str_input[i]!=str_input[len-i-1])
            {
                ans = false;
                break;
            }
        }
        return ans;
    }
};
// @lc code=end

