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
	    string s;
	    cin >> s;
	    int dp[n+1][n+1];
	    for(int i = 0 ; i <= n ; i++)
	    {
	        for(int j = 0 ; j <= n ; j++)
	        {
	            if(i == 0 || j == 0)
	                dp[i][j] = 0;
	            else if(s[i-1] == s[j-1] && i != j)
	                dp[i][j] = dp[i-1][j-1] + 1;
	            else
	                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
	        }
	    }
	    cout << dp[n][n] << endl;
	}
	return 0;
}