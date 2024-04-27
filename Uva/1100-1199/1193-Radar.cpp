#include <bits/stdc++.h>

using namespace std;

bool cmp (pair<double,double> a, pair<double,double> b)
{
    if(a.second != b.second)
        return a.second < b.second;
    else
        return a.first < b.first;
}

int main()
{
    int num = 0, cas = 0, count = 0;
    double dir = 0.0, x = 0.0, y = 0.0, cur = 0.0;
    bool haveAnswer = true;
    pair<double, double> island[1005];
    while (cin >> num >> dir)
    {
        if(num == 0 && dir == 0)
            break;
        cas ++;
        count = 1;
        haveAnswer = true;
        for(int i = 0; i < num; i++)
        {
            cin >> x >> y;
            if (y > dir)
                haveAnswer = false;
            island[i].first = x - sqrt(dir * dir - y * y);
            island[i].second = x + sqrt(dir * dir - y * y);
        }
        if(!haveAnswer)
        {
            cout << "Case " << cas << ": -1\n";
            continue;
        }
        sort(island, island + num, cmp);
        cur = island[0].second;
        for(int i = 1; i < num; i++)
        {
            if(cur >= island[i].first)
                continue;
            cur = island[i].second;
            count++;
        }
        cout << "Case " << cas << ": " << count <<"\n";
    }
    return 0;
}