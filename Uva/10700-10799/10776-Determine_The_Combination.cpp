#include <bits/stdc++.h>

using namespace std;

int num = 0;
string str = "";

void slove(int start, vector<char> ans)
{
    if(ans.size() == num)
    {
        for(int i = 0; i < ans.size(); i++)
            cout << ans[i];
        cout << '\n';
        return;
    }
    for(int i = start; i < str.size();)
    {
        char c = str[i];
        ans.push_back(c);
        slove(i + 1, ans);
        ans.pop_back();
        while(str[i] == c)
            i++;
    }
}

int main()
{
    vector<char> ans;
    while(cin >> str >> num)
    {
        sort(str.begin(), str.end());
        ans.clear();
        slove (0, ans);
    }
    return 0;
}