#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int x[3] = {0}, y[3] = {0};
    for (int i = 0; i < 3; i++)
        cin >> x[i]>> y[i];
    if(pow(x[1] - x[0], 2) + pow(y[1] - y[0], 2) == pow(x[2] - x[0], 2) + pow(y[2] - y[0], 2))
        cout << x[1] + x[2] - x[0]<< ' ' << y[1] + y[2] - y[0] << '\n';
    else if(pow(x[0] - x[1], 2) + pow(y[0] - y[1], 2) == pow(x[2] - x[1], 2) + pow(y[2] - y[1], 2))
        cout << x[0] + x[2] - x[1]<< ' ' << y[0] + y[2] - y[1] << '\n';
    else if(pow(x[1] - x[2], 2) + pow(y[1] - y[2], 2) == pow(x[0] - x[2], 2) + pow(y[0] - y[2], 2))
        cout << x[0] + x[1] - x[2]<< ' ' << y[0] + y[1] - y[2] << '\n';
    return 0;
}