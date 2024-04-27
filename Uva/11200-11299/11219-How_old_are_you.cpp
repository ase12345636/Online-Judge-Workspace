#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main(int argc, char *argv[])
{
    int counter = 0, Y1 = 0, M1 = 0, D1 = 0, Y2 = 0, M2 = 0, D2 = 0, age = 0;
    string in1, in2;
    cin >> counter;
    for (int i = 1; i <= counter; i++)
    {
        cin >> in1 >> in2;
        Y1 = (in1[6] - '0') * 1000 + (in1[7] - '0') * 100 + (in1[8] - '0') * 10 + (in1[9] - '0');
        M1 = (in1[3] - '0') * 10 + (in1[4] - '0');
        D1 = (in1[0] - '0') * 10 + (in1[1] - '0');
        Y2 = (in2[6] - '0') * 1000 + (in2[7] - '0') * 100 + (in2[8] - '0') * 10 + (in2[9] - '0');
        M2 = (in2[3] - '0') * 10 + (in2[4] - '0');
        D2 = (in2[0] - '0') * 10 + (in2[1] - '0');
        if (Y2 > Y1 || (Y2 == Y1 && (M2 > M1 || (M1 == M2 && D2 > D1))))
            cout << "Case #" << i << ":"
                 << " Invalid birth date\n";
        else
        {
            age = Y1 - Y2;
            if (Y1 == Y2)
                age = 0;
            else if (M2 > M1 || (M1 == M2 && D2 > D1))
                age--;
            if (age > 130)
                cout << "Case #" << i << ":"
                     << " Check birth date\n";
            else
                cout << "Case #" << i << ": " << age << '\n';
        }
    }
    return 0;
}