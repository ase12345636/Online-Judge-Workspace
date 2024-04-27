#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Case = 0;
    cin >> Case;
    for(int z = 1; z <= Case; z++)
    {
        int ans = 0;
        string A;
        cin >> A;
        int len = A.length();
        int right = len / 2, left = right - 1;
        for(int i = 0, j = len & 1; i < len; i++, j = !j)
        {
            int num = 0;
            if(j)
            {
                if(len - right > left)
                {
                    num = A[right] - '0';
                    right++;
                }
                else
                {
                    num = A[left] - '0';
                    left--;
                }
            }
            else
            {
                if(A[right] > A[left])
                {
                    num = A[right] - '0';
                    right++;
                }
                else
                {
                    num = A[left] - '0';
                    left--;
                }
            }
            ans = ans << 1;
            ans += num;
            ans %= 1000000007;
        }
        cout << "Case #" << z << ": " << ans << '\n';
    }
    return 0;
}