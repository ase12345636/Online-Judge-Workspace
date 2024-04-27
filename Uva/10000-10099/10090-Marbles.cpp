#include <bits/stdc++.h>

using namespace std;

long long ex_GCD(long long a, long long b, long long& x, long long& y)
{
    long long tx = 0, ty = 0;
    if (b > a)
        return ex_GCD(b, a, y, x);
    if(b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    long long g = ex_GCD(b, a % b, tx, ty);
    x = ty;
    y = tx - floor(a / b) * ty;
    return g;
}

int main()
{
    long long n = 0, n1 = 0, n2 = 0, c1 = 0, c2 = 0, x = 0, y = 0, g = 0;
    while(cin >> n)
    {
        if(n == 0)
            break;
        x = 0;
        y = 0;
        cin >> c1 >> n1;
        cin >> c2 >> n2;
        g = ex_GCD (n1, n2, x ,y);
        if(n % g != 0)
        {
            cout << "failed\n";
            continue;
        }
        long long lowk = ceil(-n * x * 1.0 / n2);            //網路上一直說這裡有通解 但我看了很久
        long long upk = floor(n * y * 1.0 / n1);             //還是看不懂他的推法 先放著
        if (lowk > upk)
        {
            cout << "failed\n";
            continue;
        }
        if(c1 * n2 < c2 * n1)
        {
            x = n * x / g + n2 * upk / g;
            y = n * y / g - n1 * upk / g;
        }
        else
        {
            x= n * x / g + n2 * lowk / g;
            y= n * y / g - n1 * lowk / g;
        }
        cout << x << ' ' << y << '\n';
    }
    return 0;
}