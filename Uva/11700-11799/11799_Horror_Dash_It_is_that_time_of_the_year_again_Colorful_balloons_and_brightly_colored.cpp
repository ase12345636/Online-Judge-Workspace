#include <iostream>

using std::cin;
using std::cout;

int main(int argc, char *argv[])
{
    int Case = 0;
    cin >> Case;
    for (int z = 0; z < Case; z++)
    {
        int number = 0, max = 0;
        cin >> number;
        for (int i = 0; i < number; i++)
        {
            int speed = 0;
            cin >> speed;
            max = speed > max ? speed : max;
        }
        cout << "Case " << z + 1 << ": " << max << '\n';
    }
    return 0;
}