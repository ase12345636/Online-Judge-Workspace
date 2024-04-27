#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ds = 0, ys = 0, dm = 0, ym = 0, ans = 5001;
    vector <int> sum;
    cin >> ds >> ys;
    cin >> dm >> ym;
    for (int i = ys - ds; i < 5000; i += ys)
        sum.push_back(i);
    for (int i = ym - dm; i < 5000; i += ym)
    {
        for (int j = 0; j < sum.size(); j++)
            if(i == sum [j])
            {
                ans = i;
                break;
            }
        if (ans == i)
            break;
    }
    cout << ans << '\n';
    return 0;
}