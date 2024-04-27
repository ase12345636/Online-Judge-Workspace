#include <iostream>

using std::cin;
using std::cout;

int main(int argc, char *argv[])
{
    bool flag = false;
    int h = 0, w = 0, ans = 0;
    char map[101][101] = {};
    while (cin >> h >> w)
    {
        ans = 0;
        for (int i = 0; i < h; i++)
            for (int j = 0; j < w; j++)
                cin >> map[i][j];
        for (int i = 0; i < h; i++)
        {
            flag = false;
            for (int j = 0; j < w; j++)
            {
                if (map[i][j] == '/' || map[i][j] == '\\')
                {
                    if (flag)
                        flag = false;
                    else
                        flag = true;
                    ans += 1;
                }
                else if (map[i][j] == '.' && flag)
                    ans += 2;
            }
        }
        cout << ans / 2 << '\n';
    }
    return 0;
}