#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main(int argc, char *argv[])
{
    bool flag = false;
    int counter[26][2] = {}, mirror[26] = {};
    string in1, in2;
    while (cin >> in1 >> in2)
    {
        flag = false;
        for (int i = 0; i < 26; i++)
            counter[i][0] = 0;
        for (int i = 0; i < in1.length(); i++)
            for (int j = 0; j < 26; j++)
                if (in1[i] == 'A' + j)
                    counter[j][0]++;
        for (int i = 0; i < 26; i++)
        {
            for (int k = 0; k < 26; k++)
                counter[k][1] = 0;
            for (int k = 0; k < in2.length(); k++)
            {
                in2[k]++;
                if (in2[k] > 'Z')
                    in2[k] = 'A';
            }
            for (int k = 0; k < in2.length(); k++)
                for (int j = 0; j < 26; j++)
                    if (in2[k] == 'A' + j)
                        counter[j][1]++;
            for (int k = 0; k < 26; k++)
                mirror[k] = counter[k][0];
            for (int k = 0; k < 26; k++)
                for (int j = 0; j < 26; j++)
                    if (mirror[j] != 0 && counter[k][1] != 0 && mirror[j] == counter[k][1])
                    {
                        mirror[j] = 0;
                        break;
                    }
            int temp = 0;
            for (int k = 0; k < 26; k++)
            {
                if (mirror[k] == 0)
                    temp++;
                else
                    break;
            }
            if (temp == 26)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}