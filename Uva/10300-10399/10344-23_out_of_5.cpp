#include <bits/stdc++.h>

using namespace std;

bool solve (int num[], int cal, int i)
{
    if(cal == 23 && i == 4)
        return 1;
    else if(i == 4)
        return 0;
    i++;
    return solve(num, cal + num[i], i) || solve(num, cal - num[i], i) || solve(num, cal * num[i], i);
}

int main()
{
    bool f_break = true, f_possible = false;
    int num[5] ={};
    while (cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4])
    {
        f_break = true;
        f_possible = false;
        for(int i = 0; i < 5; i++)
        {
            if(num[i] == 0)
                continue;
            f_break = false;
            break;
        }
        if (f_break)
            break;
        sort(num, num + 5);
        do
        {
            f_possible = solve(num, num[0], 0);
            if(f_possible)
                break;
        }while(next_permutation(num, num + 5));
        if (f_possible)
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }
    return 0;
}