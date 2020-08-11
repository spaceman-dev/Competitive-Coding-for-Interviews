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
	    int m;
	    cin >> m;
	    int arr[m];
	    for(int i = 0 ; i < m ; i++)
	        cin >> arr[i];
	    int n;
	    cin >> n;
	    int dp[m+1][n+1];
	    dp[0][0] = 1;
	    for(int i = 0 ; i <= m ; i++)
	    {
	        for(int j = 0 ; j <= n ; j++)
	        {
	            if(j == 0)
	                dp[i][j] = 1;
	            else if(i == 0)
	                dp[i][j] = 0;
	            else if(j >= arr[i-1])
	                dp[i][j] = dp[i-1][j] + dp[i][j - arr[i-1]];
	            else
	                dp[i][j] = dp[i-1][j];
	        }
	    }
	    cout << dp[m][n] << endl;
	}
	return 0;
}