#include <iostream>

using std::cin;
using std::cout;

int main(int argc, char* argv[])
{
    int v = 0, t = 0;
    while (cin >> v >> t)
        cout << 2 * v * t << '\n';
    return 0;
}