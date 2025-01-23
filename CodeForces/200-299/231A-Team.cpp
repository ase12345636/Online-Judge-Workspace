#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int Case = 0;
    int problem = 0;
    cin >> Case;
    while (Case--)
    {
        int people = 0;
        for (int i = 0; i < 3; i++)
        {
            int temp = 0;
            cin >> temp;
            if (temp)
                people++;
        }
        if (people >= 2)
            problem++;
    }
    cout << problem << '\n';
    return 0;
}