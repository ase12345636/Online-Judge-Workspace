#include <bits/stdc++.h>

using namespace std;

bool solve(string a, string b, string& c, string& d)
{
    c = "";
    d = "";
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] != b[i])
            c += "1";
        else
            c += "0";
        if(a[i] == '0' || b[i] == '0')
            d += "0";
        else
            d += "1";
    }
    if(d[0] == '1')
    {
        d = "overflow";
        return false;
    }
    d = d.substr(1);
    d += "0";
    for(int i = 0; i < d.length(); i++)
    {
        if(d[i] != '0')
            return true;
    }
    return false;
}

int main()
{
    int Case = 0;
    cin >> Case;
    for(int z = 0; z < Case; z++)
    {
        if(z != 0)
            cout << '\n';
        string a, b, c, d;
        cin >> a >> b;
        cout << a << ' ' << b << '\n';
        while(solve(a, b, c, d))
        {
            a = c;
            b = d;
            cout << a << ' ' << b << '\n';
        }
        cout << c << ' ' << d << '\n';
    }
    return 0;
}