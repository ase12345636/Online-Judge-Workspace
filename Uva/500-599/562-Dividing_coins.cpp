#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ctr = 0, num = 0, total = 0, value[100] ={0}, dp[500100] ={0};
    cin >> ctr;
    for(int i = 0; i < ctr; i++)
    {
        total = 0;
        cin >> num;
        for(int i = 0; i < num; i++)
        {
            cin >> value[i];
            total += value[i];
        }
        int half = total / 2;
        for(int i = 0; i <= half; i++)
            dp[i] = 0;
        for(int i = 0; i < num; i++)
        {
            for(int j = half; j >= value[i]; j--)
                dp[j] = max(dp[j], dp[j - value[i]] + value[i]);
        }
        cout << total - 2 * dp[half] << '\n';
    }
    return 0;
}