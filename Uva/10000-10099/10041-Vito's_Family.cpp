#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Case = 0;
    cin >> Case;
    while(Case--)
    {
        int r = 0, max = 0, min = 0x3f3f3f3f;
        int s[500] = {0};
        cin >> r;
        for(int i = 0; i < r; i++)
        {
            cin >> s[i];
            if(s[i] > max)
                max = s[i];
            if(s[i] < min)
                min = s[i];
        }
        int min_dis = 0x3f3f3f3f;
        for(int i = min; i <= max; i++)
        {
            int dis = 0;
            for(int j = 0; j < r; j++)
                dis += abs(i - s[j]);
            if (min_dis > dis)
                min_dis = dis;
        }
        cout << min_dis << '\n';
    }
}