#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using std::cin;
using std::cout;
using std::min;
using std::string;

int main(int argc, char *argv[])
{
    int letter[26] = {}, tx[26] = {}, ty[26] = {};
    string x, y;
    while (getline(cin, x) && getline(cin, y))
    {
        for (int i = 0; i < 26; i++)
        {
            letter[i] = 0;
            tx[i] = 0;
            ty[i] = 0;
        }
        for (int i = 0; i < x.length(); i++)
            tx[x[i] - 'a']++;
        for (int i = 0; i < y.length(); i++)
            ty[y[i] - 'a']++;
        for (int i = 0; i < 26; i++)
        {
            letter[i] = min(tx[i], ty[i]);
            if (letter[i] != 0)
                for (int j = 0; j < letter[i]; j++)
                    printf("%c", i + 'a');
        }
        cout << '\n';
    }
    return 0;
}