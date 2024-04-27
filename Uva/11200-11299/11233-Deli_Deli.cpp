#include <bits/stdc++.h>

using namespace std;

int main()
{
    int L = 0, N = 0;
    string dic[20][2];
    cin >> L >> N;
    for(int i = 0; i < L; i++)
        cin >> dic[i][0] >> dic[i][1];
    for(int i = 0; i < N; i++)
    {
        string str;
        bool find = false;
        cin >> str;
        for(int i = 0; i < L; i++)
        {
            if(dic[i][0] == str)
            {
                cout << dic[i][1] << '\n';
                find = true;
                break;
            }
        }
        if(!find)
        {
            if(str[str.length() - 1] == 'y' && (str[str.length() - 2] != 'a' && str[str.length() - 2] != 'e' && str[str.length() - 2] != 'i' && str[str.length() - 2] != 'o' && str[str.length() - 2] != 'u'))
            {
                str.pop_back();
                cout << str << "ies\n";
            }
            else if (str[str.length() - 1] == 'o' || str[str.length() - 1] == 's' || (str[str.length() - 2] == 'c' && str[str.length() - 1] == 'h') || (str[str.length() - 2] == 's' && str[str.length() - 1] == 'h') || str[str.length() - 1] == 'x')
                cout << str << "es\n";
            else
                cout << str << "s\n";
        }
    }
}