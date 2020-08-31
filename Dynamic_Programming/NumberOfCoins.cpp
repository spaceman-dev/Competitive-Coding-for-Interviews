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
	    int v, n;
	    cin >> v >> n;
	    int c[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> c[i];
	    int dp[n+1][v+1];
	    for(int i = 0 ; i <= n ; i++)
	    {
	        for(int j = 0 ; j <= v ; j++)
	        {
	            if(j == 0)
	                dp[i][j] = 0;
	            else if(i == 0)
	                dp[i][j] = 10000;
	            else if(c[i-1] > j)
	                dp[i][j] = dp[i-1][j];
	            else
	                dp[i][j] = min(dp[i-1][j], dp[i][j-c[i-1]] + 1);
	        }
	    }
	    if(dp[n][v] == 10000)
	        cout << "-1" << "\n";
	    else
	        cout << dp[n][v] << "\n";
	}
	return 0;
}