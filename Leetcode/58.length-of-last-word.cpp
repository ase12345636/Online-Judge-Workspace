/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        string spilt_temp;
        vector<string> spilt;
        stringstream ss;
        ss << s;
        while (ss >> spilt_temp)
            spilt.push_back(spilt_temp);
        return spilt[spilt.size() - 1].length();
    }
};
// @lc code=end

