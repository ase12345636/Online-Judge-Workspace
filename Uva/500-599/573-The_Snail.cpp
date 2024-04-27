#include <bits/stdc++.h>

using namespace std;

int main()
{
    float U = 0.0, F = 0.0;
    int H = 0, D = 0;
    while(cin >> H >> U >> D >> F)
    {
        if(H == 0)
            break;
        F = F / 100;
        F *= U;
        bool fail = false;
        int day = 0;
        float clim = 0.0;
        while(1)
        {
            day++;
            if (U > 0)
                clim += U;
            if(clim > H)
                break;
            clim -= D;
            if(clim < 0)
            {
                fail = true;
                break;
            }
            U -= F;
        }
        if(fail)
            cout << "failure on day " << day << '\n';
        else
            cout << "success on day " << day << '\n';
    }
    return 0;
}