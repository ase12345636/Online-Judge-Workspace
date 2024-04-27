#include <iostream>

using std::cin;
using std::cout;

int main(int argc,char* argv[])
{
    int player = 0, c = 0, n = 0, k = 0, p = 0;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> n >> k >> p;
        player = k;
        for (int j = 0; j < p; j++)
        {
            player ++;
            if (player > n)
                player = 1;
        }
        cout << "Case " << i + 1 << ": " << player << '\n';
    }
    return 0;
}