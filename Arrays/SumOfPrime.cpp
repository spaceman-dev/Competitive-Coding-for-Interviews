#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        bool is_prime[n+1];
        memset(is_prime, true, sizeof(is_prime));
        is_prime[0] = is_prime[1] = false;
        for(int i = 2 ; i <= n ; i++)
        {
            if(is_prime[i] && (long long)i*i <= n)
            {
                for(int j = i*i ; j <=n ; j += i)
                    is_prime[j] = false;
            }
        }
        int flag = 0;
        for(int i = 2 ; i <= n ; i++)
        {
            if(is_prime[i] && is_prime[n-i])
            {
                flag = 1;
                cout << i << " " << n-i << "\n";
                break;
            }
        }
        if(!flag)
            cout << -1 << "\n";
    }
 }