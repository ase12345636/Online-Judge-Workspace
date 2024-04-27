#include <bits/stdc++.h>

using namespace std;

char m[3][3] = {};

bool win(char a)
{
    if(m[0][0] == a && m[0][1] == a && m[0][2] == a) return true;
    if(m[0][0] == a && m[1][0] == a && m[2][0] == a) return true;
    if(m[0][1] == a && m[1][1] == a && m[2][1] == a) return true;
    if(m[0][2] == a && m[1][2] == a && m[2][2] == a) return true;
    if(m[1][0] == a && m[1][1] == a && m[1][2] == a) return true;
    if(m[2][0] == a && m[2][1] == a && m[2][2] == a) return true;
    if(m[0][0] == a && m[1][1] == a && m[2][2] == a) return true;
    if(m[0][2] == a && m[1][1] == a && m[2][0] == a) return true;
    return false;
}

int main()
{
    int Case = 0;
    cin >> Case;
    while(Case--)
    {
        int x_counter = 0, o_counter = 0;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cin >> m[i][j];
                if(m[i][j] == 'X')
                    x_counter++;
                else if(m[i][j] == 'O')
                    o_counter++;
            }
        }
        bool x_win = win('X'), o_win = win('O');
        if(x_win && !o_win && x_counter == o_counter + 1)
            cout << "yes\n";
        else if(!x_win && o_win && x_counter == o_counter)
            cout << "yes\n";
        else if(!x_win && !o_win && x_counter == o_counter)
            cout << "yes\n";
        else if(!x_win && !o_win && x_counter == o_counter + 1)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}