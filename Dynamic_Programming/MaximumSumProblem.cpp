#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	//code
	ll t;
	cin >> t;
	while(t--)
	{
	    ll n;
	    cin >> n;
	    ll dp[n+1];
	    dp[0] = 0;
	    dp[1] = 1;
	    for(ll i = 2 ; i <= n ; i++)
	        dp[i] = max(i, dp[i/2]+dp[i/3]+dp[i/4]);
	    cout << dp[n] << endl;
	}
	return 0;
}