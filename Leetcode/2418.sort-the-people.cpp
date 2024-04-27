/*
 * @lc app=leetcode id=2418 lang=cpp
 *
 * [2418] Sort the People
 */

// @lc code=start
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        bool flag=false;
        do
        {
            flag=false;
            for(int i=0;i<heights.size()-1;i++)
            {
                if(heights[i]<heights[i+1])
                {
                    int temp;
                    string temp2;
                    temp=heights[i];
                    heights[i]=heights[i+1];
                    heights[i+1]=temp;
                    temp2=names[i];
                    names[i]=names[i+1];
                    names[i+1]=temp2;
                    flag=true;
                }
            }
        }while(flag);
        return names;
    }
};
// @lc code=end

