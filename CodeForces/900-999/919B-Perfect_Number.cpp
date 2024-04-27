#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::to_string;

int main(int argc, char *argv[])
{
    int num = 0, ans = 0, count = 0, ntemp1 = 18;
    string stemp;
    cin >> num;
    while (1)
    {
        int ntemp2 = 0;
        if (count == num)
            break;
        ntemp1++;
        stemp = to_string(ntemp1);
        for (int i = 0; i < stemp.size(); i++)
            ntemp2 += stemp[i] - '0';
        if (ntemp2 == 10)
        {
            count++;
            ans = ntemp1;
        }
    }
    cout << ans;
    return 0;
}