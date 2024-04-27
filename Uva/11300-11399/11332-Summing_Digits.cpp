#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::stoi;
using std::string;
using std::to_string;

int main(int argc, char *argv[])
{
    int sum = 0;
    string in;
    while (cin >> in)
    {
        sum = stoi(in);
        if (sum == 0)
            break;
        do
        {
            sum = 0;
            for (int i = 0; i < in.length(); i++)
                sum += in[i] - '0';
            in = to_string(sum);
        } while (in.length() != 1);
        cout << sum << '\n';
    }
    return 0;
}