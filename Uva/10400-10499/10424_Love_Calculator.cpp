#include <bits/stdc++.h>

using namespace std;

int num_change(string str)
{
    int num = 0;
    for (int i = 0; i <= str.length(); i++)
    {
        if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            continue;
        if (str[i] >= 'a' && str[i] <= 'z')
            num += str[i] - 'a' + 1;
        else
            num += str[i] - 'A' + 1;
    }
    while (num >= 10)
    {
        int new_num = 0;
        while (num > 0)
        {
            new_num += num % 10;
            num /= 10;
        }
        num = new_num;
    }
    return num;
}

int main(int argc, char *argv[])
{
    string name1, name2;
    while (getline(cin, name1))
    {
        getline(cin, name2);
        int num_name1 = num_change(name1);
        int num_name2 = num_change(name2);
        cout << fixed << setprecision(2) << ((num_name2 > num_name1) ? ((double)num_name1 / num_name2 * 100) : ((double)num_name2 / num_name1 * 100)) << " %\n";
    }
    return 0;
}