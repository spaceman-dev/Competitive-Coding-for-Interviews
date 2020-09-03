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
	    long long dp[n+1];
	    for(int i = 0 ; i <= n ; i++)
	    {
	        if(i < 4)
	            dp[i] = 1;
	        else
	            dp[i] = dp[i-1] + dp[i-4];
	    }
	    cout << dp[n] << "\n";
	}
	return 0;
}