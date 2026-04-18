#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    long long num1 = 0, num2 = 0;
    while (cin >> num1 >> num2)
        cout << abs(num2 - num1) << '\n';
    return 0;
}