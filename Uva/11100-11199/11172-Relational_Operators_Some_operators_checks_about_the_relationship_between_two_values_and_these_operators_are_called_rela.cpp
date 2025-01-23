#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int Case = 0;
    cin >> Case;
    while (Case--)
    {
        int num1 = 0, num2 = 0;
        cin >> num1 >> num2;
        if (num1 > num2)
            cout << ">\n";
        else if (num1 < num2)
            cout << "<\n";
        else
            cout << "=\n";
    }
    return 0;
}