#include <iostream>
#include <bits/stdc++.h>
#define ll long long
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
	    ll dp[n+1];
	    dp[1] = 1;
	    dp[2] = 2;
	    for(int i = 3 ; i <= n ; i++)
	        dp[i] = (dp[i-1] + (i-1)*dp[i-2]) % 1000000007;
	    cout << dp[n] << "\n";
	}
	return 0;
}