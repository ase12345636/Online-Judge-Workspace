#include <bits/stdc++.h>

using namespace std;

int vitural(int m[], int a, int s1, int s2)
{
    if ((m[2] == m[4]) || (m[3] == m[5]))
        return a;
    if (m[2] == m[0])
        s1 *= (-1);
    if (m[3] == m[1])
        s2 *= (-1);
    a++;
    m[2] += s1;
    m[3] += s2;
    vitural(m, a, s1, s2);
}

int main(int argc, char *argv[])
{
    int a = 0, n = 0, m[6] = {};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
            cin >> m[j];
        a = vitural(m, a, 1, 1);
        cout << a << endl;
        a = 0;
    }
    return 0;
}
