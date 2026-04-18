#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int a = 0, b = 0, c = 0, d = 0, p = 0;
    int n = 0;
    while (cin >> p >> a >> b >> c >> d >> n)
    {
        double max_price = 0, peak = 0;
        for (int i = 1; i <= n; i++)
        {
            double price = (double)p * (sin(a * i + b) + cos(c * i + d) + 2);
            if (max_price < price)
                max_price = price;
            if (max_price - price > peak)
                peak = max_price - price;
        }
        cout << fixed << setprecision(6) << peak << '\n';
    }
    return 0;
}