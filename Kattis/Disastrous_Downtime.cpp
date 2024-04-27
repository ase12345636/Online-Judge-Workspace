#include <bits/stdc++.h>

#define MAX_PROCESS 100000

using namespace std;

int main()
{
    int Case = 0, mulit = 0, procseeing = 0, less = 0;
    int time [MAX_PROCESS + 1] = {0};
    while(cin >> Case >> mulit)
    {
        procseeing = 0;
        less = 0;
        for(int i = 0; i < Case; i++)
        {
            int temp = 0;
            cin >> temp;
            time[temp] ++;
        }
        for(int i = 0; i < 1000; i++)
            procseeing += time[i];
        less = procseeing;
        for(int i = 1000; i <= MAX_PROCESS; i++)
        {
            procseeing += time[i];
            procseeing -= time[i - 1000];
            less = max(less, procseeing);
        }
        if(less % mulit == 0)
            less /= mulit;
        else
            less = less / mulit + 1;
        cout << less << '\n';
    }
    return 0;
}