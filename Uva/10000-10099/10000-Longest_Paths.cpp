#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    int cas = 0;
    while(cin >> n)
    {
        cas++;
        if(n == 0)
            break;
        int s = 0;
        cin >> s;
        int p = 0, q = 0;
        int map[101][101] = {0};
        while(cin >> p >> q)
        {
            if(p == 0 && q == 0)
                break;
            map[p][q] = true;
        }
        vector<int> distance(n + 1, 0);
        queue<int> next;
        vector<int> inQuene(n + 1, false);
        next.push(s);
        while(!next.empty())
        {
            int currect = next.front();
            next.pop();
            inQuene[currect] = false;
            for(int i = 1; i <= n; i++)
            {
                if(map[currect][i] == 1 && distance[currect] + 1 > distance[i])
                {
                    distance[i] = distance[currect] + 1;
                    if(!inQuene[i])
                    {
                        next.push(i);
                        inQuene[i] = true;
                    }
                }
            }
        }
        int MaxIndex = 1;
        for(int i = 2; i <= n; i++)
            if(distance[i] > distance[MaxIndex])
                MaxIndex = i;
        cout << "Case " << cas << ": The longest path from " << s << " has length " << distance[MaxIndex] << ", finishing at " << MaxIndex <<".\n\n";
    }
    return 0;
}