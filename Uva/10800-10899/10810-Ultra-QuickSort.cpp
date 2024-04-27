#include <bits/stdc++.h>

using namespace std;

void mergesort(long long& counter, vector<int> &input, int left, int right)
{
    int middle = (left + right) / 2;
    int index_left = left, index_right = middle + 1;
    vector<int> sorted;
    if(left < right)
    {
        mergesort(counter, input, left, middle);
        mergesort(counter, input, middle + 1, right);
        sorted.clear();
        for (int i = left; i <= right; i++)
        {
            if(index_left > middle)
            {
                sorted.push_back(input[index_right++]);
                continue;
            }
            if(index_right > right)
            {
                sorted.push_back(input[index_left++]);
                continue;
            }
            if(input[index_left] <= input[index_right])
                sorted.push_back(input[index_left++]);
            else
            {
                counter += middle - index_left + 1;
                sorted.push_back(input[index_right++]);
            }
        }
        for(int i = 0; i < sorted.size(); i++)
            input[i + left] = sorted[i];
    }
    else
        return;
}

int main()
{
    int len = 0, temp_input = 0;
    long long answer = 0;
    vector<int> seq_input;
    while (cin >> len)
    {
        if (len == 0)
            break;
        answer = 0;
        seq_input.clear();
        for (int i = 0; i < len; i++)
        {
            cin >> temp_input;
            seq_input.push_back(temp_input);
        }
        mergesort(answer, seq_input, 0, seq_input.size() - 1);
        cout << answer << '\n';
    }
    return 0;
}