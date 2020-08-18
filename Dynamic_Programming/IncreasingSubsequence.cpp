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
	    string s;
	    cin >> s;
	    int n = s.length();
	    int dp[n];
	    dp[0] = 1;
	    for(int i = 1 ; i < n ; i++)
	    {
	        dp[i] = 1;
	        for(int j = 0 ; j < i ; j++)
	        {
	            if(s[i] > s[j] && dp[i] <= dp[j])
	                dp[i] = dp[j] + 1;
	        }
	    }
	    sort(dp, dp + n, greater<int>());
	    cout << dp[0] << endl;
	}
	return 0;
}