#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T = 0, target = 0, scorce_num = 0, score[51] = {};
    cin >> T;
    for(int z = 0; z < T; z++)
    {
        int dp[51][301];
        pair<int,int> from[51][301];
        cin >> scorce_num >> target;
        for(int i = 1; i <= scorce_num; i++)
            cin >> score[i];
        memset(dp, 0x3f, sizeof(dp));
        dp[0][0] = 0;
        from[0][0] = make_pair(-1, -1);
        for(int i = 1; i <= scorce_num; i++)
        {
            for(int j = 0; j <= target; j++)
            {
                dp[i][j] = dp[i - 1][j];
                from[i][j] = from[i - 1][j];
            }
            for(int j = score[i]; j <= target; j++)
            {
                dp[i][j] = min(dp[i][j], min(dp[i][j - score[i]] + 1, dp[i - 1][j - score[i]] + 1));
                if(dp[i][j] == dp[i][j - score[i]] + 1)
                    from[i][j] = make_pair(i, j - score[i]);
                else if(dp[i][j] == dp[i - 1][j - score[i]] + 1)
                    from[i][j] = make_pair(i - 1, j - score[i]);
            }
        }
        cout << "Case " << z + 1 << ": ";
        if(dp[scorce_num][target] == 0x3f3f3f3f)
            cout << "impossible\n";
        else
        {
            int out_num = target;
            pair<int, int> right_out = from[scorce_num][target];
            cout << "[" << dp[scorce_num][target] << "]";
            while(right_out.first != -1)
            {
                cout << ' ' << out_num - right_out.second;
                out_num = right_out.second;
                right_out = from[right_out.first][right_out.second];
            }
            cout << '\n';
        }
    }
    return 0;
}