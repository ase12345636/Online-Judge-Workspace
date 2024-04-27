/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

// @lc code=start
class Solution {
public:
    vector<int> countBits(int n) {
        int counter=0;
        vector<int> answer;
        for(int i=0;i<=n;i++)
        {
            counter=0;
            for(int j=i;j>=1;)
            {
                if(j%2==1)
                    counter++;
                j/=2;
            }
            answer.push_back(counter);
        }
        return answer;
    }
};
// @lc code=end

