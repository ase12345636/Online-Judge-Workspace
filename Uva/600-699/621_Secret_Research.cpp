#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int N = 0;
    cin >> N;
    for (int z = 0; z < N; z++)
    {
        string result;
        cin >> result;
        if (result == "1" || result == "4" || result == "78")
            cout << "+\n";
        else if (result[result.length() - 1] == '5' && result[result.length() - 2] == '3')
            cout << "-\n";
        else if (result[result.length() - 1] == '4' && result[0] == '9')
            cout << "*\n";
        else if (result.substr(0, 3) == "190")
            cout << "?\n";
    }
    return 0;
}