#include <iostream>

using std::cin;
using std::cout;

int main(int argc, char *argv[])
{
    int init = 0, ans = 0, empty = 0;
    while (cin >> init)
    {
        ans = init;
        empty = init;
        while (empty >= 3)
        {
            ans += empty / 3;
            empty = empty / 3 + empty % 3;
        }
        cout << ans + empty / 2 << '\n';
    }
}
