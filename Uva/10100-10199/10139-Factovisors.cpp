#include <bits/stdc++.h>

using namespace std;

vector<int> sieve(int num)
{
    int list_num[num] = {0};
    vector<int> prime;
    for(int i = 2; i < num; i++)
    {
        if (list_num[i] == 0)
        {
            prime.push_back(i);
            for(int j = i + i; j < num; j += i)
                list_num[j] = 1;
        }
    }
    return prime;
}

int slove(int n, int m, int prime_num, vector<int> prime)
{
    int exp_count_n = 0;
    long long exp_count_m = 0, prime_exp = 0;
    for(int i = 0; i < prime_num && prime[i] * prime[i] <= m; i++)
    {
        if(m % prime[i] == 0)
        {
            exp_count_n = 0;
            exp_count_m = 0;
            while (m % prime[i] == 0)
            {
                exp_count_n ++;
                m /= prime[i];
            }
            prime_exp = prime[i];
            while (prime_exp <= n)
            {
                exp_count_m += n/prime_exp;
                prime_exp *= prime[i];
            }
            if (exp_count_m < exp_count_n)
                return 0;
        }
    }
    if(m != 1 && n < m)
        return 0;
    return 1;
}

int main ()
{
    int a = 0, b = 0, a_temp = 0, b_temp = 0, exp_conut = 0, prime_num = 0;
    bool divides = true;
    vector<int> prime;
    prime = sieve(50000);
    prime_num = prime.size();
    while (cin >> a >> b)
    {
        if (slove(a, b, prime_num, prime) == 1)
            cout << b << " divides " << a << "!\n";
        else
            cout << b << " does not divide " << a << "!\n";
    }
    return 0;
}