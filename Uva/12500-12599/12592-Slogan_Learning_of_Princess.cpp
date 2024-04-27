#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main(int argc, char *argv[])
{
    int n1 = 0, n2 = 0;
    string str1[41] = {}, str2[101] = {};
    cin >> n1;
    for (int i = 0; i <= n1 * 2; i++)
        getline(cin, str1[i]);
    cin >> n2;
    for (int i = 0; i <= n2; i++)
        getline(cin, str2[i]);
    for (int i = 1; i <= n2; i++)
        for (int j = 1; j <= n1 * 2; j = j + 2)
            if (str1[j] == str2[i])
                cout << str1[j + 1] << '\n';
    return 0;
}