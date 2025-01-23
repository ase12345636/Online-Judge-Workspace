#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    unsigned long long n = 0, m = 0, a = 0;
    cin >> n >> m >> a;
    cout << (unsigned long long)(ceil((double)n / a) * ceil((double)m / a)) << '\n';
    return 0;
}