#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool first = true;
    int n = 0, m = 0, total = 0;
    while (cin >> n >> m)
    {
        vector<vector <int>> matrix(n + 1, vector<int>(n + 1));
        total = 0;
        if(!first)
            cout << '\n';
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                cin >> matrix[i][j];
                matrix[i][j] += matrix[i - 1][j] + matrix[i][j - 1] - matrix[i - 1][j - 1];
            }
        }
        for(int i = m; i <= n; i++)
        {
            for(int j = m; j <= n; j++)
            {
                cout << matrix[i][j] - matrix[i - m][j] - matrix[i][j - m] + matrix[i - m][j - m] << '\n';
                total += matrix[i][j] - matrix[i - m][j] - matrix[i][j - m] + matrix[i - m][j - m];
            }
        }
        cout << total << '\n';
        first = false;
    }
    return 0;
}