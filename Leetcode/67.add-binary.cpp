/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        int index_a = 0, index_b = 0;
        string ans;
        index_a = a.length() - 1;
        index_b = b.length() - 1;
        ans = plus(a, b, index_a, index_b);
        return ans;
    }
    string plus (string a, string b, int& index_a, int& index_b ,int carry = 0)
    {
        int catch_a = 0, catch_b = 0, buffer_plus = 0;
        if (index_a < 0 && index_b < 0 && carry != 0)
            return to_string(carry);
        else if(index_a < 0 && index_b < 0)
            return "";
        else if (index_a < 0)
        {
            catch_a = 0;
            catch_b = b[index_b] - '0';
            index_b--;
        }
        else if (index_b < 0)
        {
            catch_a = a[index_a] - '0';
            catch_b = 0;
            index_a--;
        }
        else
        {
            catch_a = a[index_a] - '0';
            catch_b = b[index_b] - '0';
            index_a--;
            index_b--;
        }
        buffer_plus = catch_a + catch_b + carry;
        carry = buffer_plus / 2;
        return plus (a, b, index_a, index_b, carry) + to_string(buffer_plus % 2);
    }
};
// @lc code=end

