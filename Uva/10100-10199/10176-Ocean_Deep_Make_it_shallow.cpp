#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int ans = 0;
    char in = 0;
    while (in = getchar())
    {
        if(in == -1)
            break;
        if(in == '1' || in == '0')
        {
            ans *= 2;
            ans += in - '0';
            ans %= 131071;
        }
        else if (in == '#')
        {
            if (ans == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
            ans = 0;
        }
    }
    return 0;
}
