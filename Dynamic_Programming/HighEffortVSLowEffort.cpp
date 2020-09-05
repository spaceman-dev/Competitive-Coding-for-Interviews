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
	    int hi[n], li[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> hi[i];
	    for(int i = 0 ; i < n ; i++)
	        cin >> li[i];
	    int dp[n+1];
	    dp[0] = 0;
	    dp[1] = hi[0];
	    for(int i = 2 ; i <= n ; i++)
	        dp[i] = max((hi[i-1] + dp[i-2]), li[i-1] + dp[i-1]);
	    cout << dp[n] << "\n";
	}
	return 0;
}