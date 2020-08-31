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
	    int dp[n+1];
	    std::fill(dp, dp+n+1, INT_MAX-1);
	    dp[0] = 0;
	    for(int i = 1 ; i <= n ; i++)
	    {
	        for(int j = 1 ; j*j <= i ; j++)
	            dp[i] = min(dp[i], dp[i - j*j] + 1);
	    }
	    cout << dp[n] << "\n";
	}
	return 0;
}