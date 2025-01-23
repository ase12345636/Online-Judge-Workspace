#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int ctr = 0;
    string str;
    while (1)
    {
        cin >> str;
        if (str == "#")
            break;
        ctr++;
        cout << "Case " << ctr << ": ";
        if (str == "HELLO")
            cout << "ENGLISH";
        else if (str == "HOLA")
            cout << "SPANISH";
        else if (str == "HALLO")
            cout << "GERMAN";
        else if (str == "BONJOUR")
            cout << "FRENCH";
        else if (str == "CIAO")
            cout << "ITALIAN";
        else if (str == "ZDRAVSTVUJTE")
            cout << "RUSSIAN";
        else
            cout << "UNKNOWN";
        cout << '\n';
    }
    return 0;
}