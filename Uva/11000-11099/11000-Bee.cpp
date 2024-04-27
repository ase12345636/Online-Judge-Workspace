#include <iostream>

using std::cin;
using std::cout;

int main(int argc, char *argv[])
{
    int year;
    unsigned int bee[2] = {0, 1};
    while (cin >> year)
    {
        if (year == -1)
            break;
        for (int i = 0; i < year; i++)
        {
            int m = bee[0], f = bee[1];
            bee[0] = f + m;
            bee[1] = m + 1;
        }
        cout << bee[0] << ' ' << bee[0] + bee[1] << '\n';
        bee[0] = 0;
        bee[1] = 1;
    }
    return 0;
}