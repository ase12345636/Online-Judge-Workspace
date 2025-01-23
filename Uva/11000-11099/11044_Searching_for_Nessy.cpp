#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int Case = 0;
    cin >> Case;
    while (Case--)
    {
        int n = 0, m = 0;
        cin >> n >> m;
        cout << (n / 3) * (m / 3) << '\n';
    }
    return 0;
}