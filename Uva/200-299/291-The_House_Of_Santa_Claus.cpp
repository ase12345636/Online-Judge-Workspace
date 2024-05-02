#include <bits/stdc++.h>

using namespace std;

int m[5][5]=
{{0, 1, 1, 0, 1},
 {1, 0, 1, 0, 1},
 {1, 1, 0, 1, 1},
 {0, 0, 1, 0, 1},
 {1, 1, 1, 1, 0}};

int ans[8]={0};

void DFS(int idx, int now)
{
    ans[idx] = now + 1;
    if(idx == 8)
    {
        for(int i = 0; i < 9 ; i++)
            cout << ans[i];
        cout << '\n';
    }
    for(int i = 0; i < 5; i++)
    {
        if(m[now][i] == 1)
        {
            m[now][i] = m[i][now] = 0;
            DFS(idx + 1, i);
            m[now][i] = m[i][now] = 1;
        }
    }
}

int main()
{
    DFS(0, 0);
    return 0;
}