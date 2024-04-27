#include <bits/stdc++.h>

using namespace std;

vector<int> graph[26];
bool visited[26];

void dfs(int i)
{
    visited[i] = true;
    for(int v = 0; v < graph[i].size(); v++)
    {
        if(visited[graph[i][v]] == false)
            dfs(graph[i][v]);
    }
}

void dfs_visiter(char V)
{
    int ans = 0;
    for(int i = 0; i <= V; i++)
    {
        if(visited[i] == false)
        {
            ans++;
            dfs(i);
        }
    }
    cout << ans << '\n';
}

int main()
{
    int Case = 0;
    cin >> Case;
    while(Case--)
    {
        char Max_V;
        memset(visited, false, sizeof(visited));
        cin >> Max_V;
        Max_V = Max_V - 'A';
        string s;
        while(getline(cin, s) && s != "");
        while(getline(cin, s) && s != "")
        {
            int n_V1 = s[0] - 'A';
            int n_V2 = s[1] - 'A';
            graph[n_V1].push_back(n_V2);
            graph[n_V2].push_back(n_V1);
        }
        dfs_visiter(Max_V);
        if(Case)
            cout << '\n';
        for(int i = 0; i < 26; i++)
            graph[i].clear();
    }
    return 0;
}