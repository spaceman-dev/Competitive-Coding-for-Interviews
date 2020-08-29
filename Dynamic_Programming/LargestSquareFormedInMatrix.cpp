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
	    int n, m;
	    cin >> n >> m;
	    int dp[n+1][m+1];
	    int res = 0;
	    for(int i = 0 ; i <= n ; i++)
	    {
	        for(int j = 0 ; j <= m ; j++)
	        {
	            if(i == 0 || j == 0)
	            {
	                dp[i][j] = 0;
	                continue;
	            }
	            cin >> dp[i][j];
	            if(dp[i][j])
	            {
	                dp[i][j] = min(dp[i-1][j-1], min(dp[i][j-1], dp[i-1][j]))+1;
	                res = max(res, dp[i][j]);
	            }
	        }
	    }
	    cout << res << "\n";
	}
	return 0;
}