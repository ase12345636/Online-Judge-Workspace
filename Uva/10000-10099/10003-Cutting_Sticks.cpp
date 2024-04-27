#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l = 0, n = 0;
    while(cin >> l)
    {
        if(l == 0)
            break;
        cin >> n;
        int c[52]={0};
        for(int i = 1; i <= n; i++)
            cin >> c[i];
        c[n + 1] = l;
        int dp[52][52]={0};
        for(int w = 2; w <= n + 1; w++)
        {
            for(int left = 0; left <= n; left++)
            {
                int right = left + w;
                if(right > n + 1)
                    break;
                dp[left][right] = INT_MAX;
                for(int i = left + 1; i < right; i++)
                    dp[left][right] = min(dp[left][i] + dp[i][right] + c[right] - c[left], dp[left][right]);
            }
        }
        cout << "The minimum cutting is " << dp[0][n + 1] << ".\n";
    }
    return 0;
}