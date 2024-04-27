#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num = 0, N = 0, X = 0;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin >> N;
        cout << "Case " << i + 1 << ":";
        for (int i = sqrt(N) - 1; i >= 1; i--)
        {
            X = N - i * i;
            if(X % i == 0)
                cout << ' ' << X;
        }
        cout << '\n';
    }
    return 0;
}