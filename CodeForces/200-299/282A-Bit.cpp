#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int Case = 0, X = 0;
    cin >> Case;
    while (Case--)
    {
        string str;
        cin >> str;
        if (str.find("++") != -1)
            X++;
        else if (str.find("--") != -1)
            X--;
    }
    cout << X << '\n';
    return 0;
}