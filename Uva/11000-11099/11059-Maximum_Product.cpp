#include <iostream>

using std::cin;
using std::cout;
using std::max;

int main(int argc, char *argv[])
{
    int num = 0, count = 0, in[18] = {};
    long long ans = 0, temp = 1;
    while (cin >> num)
    {
        count++;
        ans = 0;
        for (int i = 0; i < num; i++)
            cin >> in[i];
        for (int i = 0; i < num; i++)
        {
            temp = 1;
            for (int j = i; j < num; j++)
            {
                temp *= in[j];
                ans = max(ans, temp);
            }
        }
        cout << "Case #" << count << ": The maximum product is " << ans << ".\n\n";
    }
    return 0;
}