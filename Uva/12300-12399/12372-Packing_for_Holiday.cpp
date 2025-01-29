#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int Case = 0;
    cin >> Case;
    for (int i = 1; i <= Case; i++)
    {
        int L = 0, W = 0, H = 0;
        cout << "Case " << i << ": ";
        cin >> L >> W >> H;
        if (L <= 20 && W <= 20 && H <= 20)
            cout << "good\n";
        else
            cout << "bad\n";
    }
    return 0;
}