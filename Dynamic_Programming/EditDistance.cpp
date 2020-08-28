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
	    int p, q;
	    cin >> p >> q;
	    string s1, s2;
	    cin >> s1 >> s2;
	    int dp[p+1][q+1];
	    for(int i = 0 ; i <= p ; i++)
	        dp[i][0] = i;
	    for(int i = 0 ; i <= q ; i++)
	        dp[0][i] = i;
	    for(int i = 1; i <= p ; i++)
	    {
	        for(int j = 1 ; j <= q ; j++)
	        {
	            if(s1[i-1] == s2[j-1])
	                dp[i][j] = dp[i-1][j-1];
	            else
	                dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
	        }
	    }
	    cout << dp[p][q] << "\n";
	}
	return 0;
}