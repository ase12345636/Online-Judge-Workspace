#include <bits/stdc++.h>

using namespace std;

bool isrepeat (int num1, int num2)
{
    bool numcheck[10] = {0};
    for(int i = 0; i < 5; i++)
    {
        if(numcheck[num1 % 10] != 1)
        {
            numcheck[num1 % 10] = 1;
            num1 /= 10;
        }
        else
            return true;
        if(numcheck[num2 % 10] != 1)
        {
            numcheck[num2 % 10] = 1;
            num2 /= 10;
        }
        else
            return true;
    }
    return false;
}

int main()
{
    int n = 0, abcde = 0;
    bool haveAnswer = false, firstout = false, firstinput = true;
    while(cin >> n)
    {
        haveAnswer = false;
        firstout = true;
        if (n == 0)
            break;
        for (int fghij = 01234; fghij <= 98765; fghij++)
        {
            abcde = n * fghij;
            if (abcde > 98765)
                break;
            if (!isrepeat(abcde, fghij))
            {
                if(firstout && !firstinput)
                {
                    cout << '\n';
                    firstout = false;
                }
                cout << setfill('0') << setw(5) << abcde;
                cout << " / ";
                cout << setfill('0') << setw(5) << fghij;
                cout << " = " << n << '\n';
                haveAnswer = true;
            }
        }
        if(firstout && !firstinput)
            cout << '\n';
        if (!haveAnswer)
            cout << "There are no solutions for " << n << '.' << '\n';
        firstinput = false;
    }
    return 0;
}