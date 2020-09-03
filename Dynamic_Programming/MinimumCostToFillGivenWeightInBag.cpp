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
	    int n, w;
	    cin >> n >> w;
	    int cost[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> cost[i];
	    int dp[w+1];
	    dp[0] = 0;
	    for(int i = 1 ; i <= w ; i++)
	    {
	        dp[i] = INT_MAX;
	        for(int j = 0 ; j < i && j < n ; j++)
	        {
	            if((cost[j] != -1) && (dp[i-j-1] != INT_MAX))
	                dp[i] = min(dp[i], cost[j] + dp[i-j-1]);
	        }
	    }
	    if(dp[w] == INT_MAX)
	        cout << "-1" << "\n";
	    else
	        cout << dp[w] << "\n";
	}
	return 0;
}