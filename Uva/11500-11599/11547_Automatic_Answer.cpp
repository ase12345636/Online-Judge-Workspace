#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int Case = 0;
    cin >> Case;
    while (Case--)
    {
        int n = 0;
        cin >> n;
        cout << abs(((n * 567 / 9 + 7492) * 235 / 47 - 498) % 100 / 10) << '\n';
    }
    return 0;
}