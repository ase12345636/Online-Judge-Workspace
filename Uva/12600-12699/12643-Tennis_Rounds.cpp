#include <iostream>

using std::cin;
using std::cout;

int main(int argc, char *argv[])
{
    int num = 0, p1 = 0, p2 = 0, ans = 0;
    while (cin >> num >> p1 >> p2)
    {
        for (int i = 1; i <= num; i++)
        {
            p1 = (p1 + 1) / 2;
            p2 = (p2 + 1) / 2;
            ans = i;
            if (p1 == p2)
                break;
        }
        cout << ans << '\n';
    }
    return 0;
}