#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main(int argc, char *argv[])
{
    int n1 = 0, n2 = 0, l = 0, f = 0;
    vector<int> list;
    while (cin >> n1 >> n2)
    {
        f = 0;
        if (n1 == 1 || n2 == 0 || n2 == 1 || n2 > n1)
            cout
                << "Boring!\n";
        else
        {
            list.push_back(n1);
            while (n1 != 1)
            {
                if (n1 % n2 == 0)
                {
                    list.push_back(n1 / n2);
                    n1 /= n2;
                }
                else
                {
                    f = 1;
                    cout << "Boring!\n";
                    break;
                }
            }
            l = list.size();
            if (f == 0)
            {
                for (int i = 0; i < l; i++)
                {
                    cout << list[i];
                    if (i == l - 1)
                        cout << '\n';
                    else
                        cout << ' ';
                }
            }
            list.clear();
        }
    }
    return 0;
}