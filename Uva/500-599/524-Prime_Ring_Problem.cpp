#include <bits/stdc++.h>

using namespace std;

int num[20] = {1};
int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41};

bool isPrime(int num)
{
    for(int n : prime)
        if(num == n)
            return true;
    return false;
}

void solve(int len, int ctr, vector<bool> visit)
{
    if(len == ctr)
    {
        if(!isPrime(num[len - 1] + num[0]))
            return;
        for(int i = 0; i < len; i++)
        {
            cout << num[i];
            if(i != len - 1)
                cout << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = 2; i <= len; i++)
    {
        if(visit[i] == 1) continue;
        if(isPrime(num[ctr - 1] + i))
        {
            visit[i] = 1;
            num[ctr] = i;
            solve(len, ctr + 1, visit);
            visit[i] = 0;
        }
    }
}

int main()
{
    int n = 0, Case = 0;
    vector<bool> visit;
    vector<int> num;
    while(cin >> n)
    {
        if(Case++)
            cout << '\n';
        cout << "Case " << Case <<":\n";
        visit.clear();
        num.clear();
        for(int i = 0; i <= n; i++)
            visit.push_back(0);
        solve(n, 1, visit);
    }
    return 0;
}