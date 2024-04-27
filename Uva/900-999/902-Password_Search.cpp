#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num = 0, max_count = 0;
    string str;
    map <string, int> count;
    while(cin >> num >> str)
    {
        count.clear();
        max_count = 0;
        for(int i = 0; i <= str.length() - num; i++)
        {
            string temp;
            for(int j = i; j < i + num; j++)
                temp += str[j];
            count[temp] ++;
            max_count = max(max_count, count[temp]);
        }
        for(auto rightnow = count.begin(); rightnow != count.end(); rightnow++)
        {
            if(rightnow -> second == max_count)
                cout << rightnow -> first << '\n'; 
        }
    }
    return 0;
}