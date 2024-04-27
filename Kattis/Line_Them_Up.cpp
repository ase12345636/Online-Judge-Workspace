#include <bits/stdc++.h>

using namespace std;

int main()
{
    string prev, now;
    bool incr = true, decr = true;
    int counter = 0;
    cin >> counter;
    cin >> prev;
    for (int i = 1; i < counter; i++)
    {
        cin >> now;
        if (incr == false && decr == false)
            break;
        for (int j = 0; j < now.length() && j < prev.length(); j++)
        {
            if (prev[j] == now [j])
                continue;
            else
            {
                if (incr)
                    incr = prev[j] < now [j] ? true : false;
                if (decr)
                    decr = prev[j] > now [j] ? true : false;
                break;
            }
        }
        prev = now;
    }
    if (!incr && !decr)
        cout << "NEITHER\n";
    else if (incr)
        cout << "INCREASING\n";
    else
        cout << "DECREASING\n";
    return 0;
}