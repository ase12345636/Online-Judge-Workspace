#include <bits/stdc++.h>

using namespace std;

#define MAX_LEN 200005

int tree[MAX_LEN]={};

void add(int p, int v)
{
    while(p < MAX_LEN)
    {
        tree[p] += v;
        p += p & -p;
    }
}

int query(int p)
{
    int s = 0;
    while(p >= 1)
    {
        s += tree[p];
        p -= p & -p;
    }
    return s;
}

int main()
{
    int Case = 0, n = 0, m = 0, v = 0;
    int arr[100001] ={};
    cin >> Case;
    for(;Case > 0; Case--)
    {
        memset(tree, 0, sizeof(tree));
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
        {
            arr[i] = n - i + 1;
            add(i, 1);
        }
        for(int i = 1; i <= m; i++)
        {
            cin >> v;
            int under = query(arr[v]);
            cout << n - under;
            if(i == m)
                cout << '\n';
            else
                cout << ' ';
            add(arr[v], -1);
            arr[v] = n + i;
            add(n + i, 1);
        }
    }
    return 0;
}