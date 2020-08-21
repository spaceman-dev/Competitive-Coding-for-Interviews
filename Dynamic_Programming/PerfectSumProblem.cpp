#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    int sum;
	    cin >> sum;
	    int dp[n+1][sum+1];
	    memset(dp, 0, sizeof(dp));
	    for(int i = 0 ; i <= n ; i++)
	        dp[i][0] = 1;
	    for(int i = 1 ; i <= n ; i++)
	    {
	        for(int j = 1 ; j <= sum ; j++)
	        {
	            if(arr[i-1] > j)
	                dp[i][j] = dp[i-1][j] %1000000007;
	            else
	                dp[i][j] = dp[i-1][j] %1000000007 + dp[i-1][j-arr[i-1]] %1000000007;
	        }
	    }
	    cout << dp[n][sum]%1000000007 << endl;
	}
	return 0;
}