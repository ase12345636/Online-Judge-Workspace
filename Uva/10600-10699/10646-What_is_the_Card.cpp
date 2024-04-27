#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Case = 0;
    string stack[52];
    string hand[25];
    cin >> Case;
    for(int C = 0; C < Case; C++)
    {
        for(int i = 0; i < 27; i++)
            cin >> stack[i];
        for(int i = 0; i < 25; i++)
            cin >> hand[i];
        int index = 26, Y = 0;
        for(int i = 0; i < 3; i++)
        {
            int X = 0;
            if(stack[index][0] > '0' && stack[index][0] <= '9')
                X = stack[index][0] - '0';
            else
                X = 10;
            Y += X;
            for(int j = 10 - X; j >=0; j--)
                index --;
        }
        for(int i = 0; i < 25; i++)
            stack[++index] = hand[i];
        cout << "Case " << C + 1 << ": " << stack[Y - 1] << '\n';
    }
    return 0;
}