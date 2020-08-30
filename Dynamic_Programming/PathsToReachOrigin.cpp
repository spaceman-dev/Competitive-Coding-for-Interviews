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
	    for(int i = 0 ; i <= n ; i++)
	    {
	        for(int j = 0 ; j <= m ; j++)
	        {
	            if(i == 0 || j == 0)
	                dp[i][j] = 1;
	            else
	                dp[i][j] = dp[i-1][j] + dp[i][j-1];
	        }
	    }
	    cout << dp[n][m] << "\n";
	}
	return 0;
}