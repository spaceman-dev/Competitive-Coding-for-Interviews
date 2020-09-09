#include<bits/stdc++.h>
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
	    int n, w;
	    cin >> n >> w;
	    int val[n], wt[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> val[i];
	    for(int i = 0 ; i < n ; i++)
	        cin >> wt[i];
	    ll dp[n+1][w+1];
	    for(int i = 0 ; i <= n ; i++)
	    {
	        for(int j = 0 ; j <= w ; j++)
	        {
	            if(i == 0 || j == 0)
	                dp[i][j] = 0;
	            else if(wt[i-1] <= j)
	                dp[i][j] = max(val[i-1] + dp[i][j - wt[i-1]], dp[i-1][j]);
	            else
	                dp[i][j] = dp[i-1][j];
	        }
	    }
	    cout << dp[n][w] << "\n";
	}
	return 0;
}