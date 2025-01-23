#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int Case = 0;
    cin >> Case;
    while (Case--)
    {
        long long number = 0;
        cin >> number;
        cout << (long long)floor((-1 + sqrt(1 + 8 * number)) / 2) << '\n';
    }
    return 0;
}