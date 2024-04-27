#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N = 0, B = 0, H = 0, W = 0, C = 0;
    int p[19] = {0};
    int a[19][14] = {0};
    while(cin >> N >> B >> H >> W)
    {
        C = 0x3f3f3f3f;
        for(int i = 0; i < H ; i++)
        {
            cin >> p[i];
            for(int j = 0; j < W; j++)
                cin >> a[i][j];
        }
        for(int i = 0; i < W; i++)
        {
            for(int j = 0; j < H; j++)
            {
                if(a[j][i] >= N && C > p[j] * N)
                    C = p[j] * N;
            }
        }
        if(C > B)
            cout << "stay home\n";
        else
            cout << C << '\n';
    }
    return 0;
}