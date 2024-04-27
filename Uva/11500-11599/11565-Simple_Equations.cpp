#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0, A = 0, B = 0, C = 0, i = 0, j = 0, k = 0;
    bool flag = false;
    cin >> n;
    for(int h = 0; h < n; h++)
    {
        cin >> A >> B >> C;
        flag = false;
        for(i = -100; i < 100; i++)
        {
            for(j = -100; j < 100; j++)
            {
                for(k = -100; k < 100; k++)
                {
                    if (i == j || j == k || k == i)
                        continue;
                    else if(i + j + k == A && i * j * k == B && i * i + j * j + k * k == C)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    break;
            }
            if(flag)
                break;
        }
        if(flag)
            cout << i << ' ' << j << ' ' << k <<'\n';
        else
            cout << "No solution.\n";
    }
    return 0;
}