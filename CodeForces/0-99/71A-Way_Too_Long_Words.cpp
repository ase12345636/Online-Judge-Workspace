#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int Case = 0;
    cin >> Case;
    while (Case--)
    {
        string str;
        cin >> str;
        if (str.length() > 10)
        {
            cout << str[0];
            cout << str.length() - 2;
            cout << str[str.length() - 1];
            cout << '\n';
        }
        else
            cout << str << '\n';
    }
    return 0;
}