#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0, m = 0;
    long long p = 1;
    while (cin >> n >> m)
    {
        p = 1;
        for(int i = n; i > n - m; i--)
        {
            p *= i;
            while (p % 10 == 0)
                p /= 10;
            p %= 20000000;
        }
        cout << p % 10 << '\n';
    }
    return 0;
}