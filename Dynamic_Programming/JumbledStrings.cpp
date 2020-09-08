#include <bits/stdc++.h>
using namespace std;

int main()
{
	//code
	// Same as count of distinct subsequences
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    string s2 = "GEEKS";
	    int dp[n+1][6];
	    for(int i = 0 ; i <= n ; i++)
	    {
	        for(int j = 0 ; j <= 5 ; j++)
	        {
	            if(j == 0)
	                dp[i][j] = 1;
	            else if(i == 0)
	                dp[i][j] = 0;
	            else if(s[i-1] == s2[j-1])
	                dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % 1000000007;
	            else
	                dp[i][j] = dp[i-1][j] % 1000000007;
	        }
	    }
	    cout << dp[n][5] << "\n";
	}
	return 0;
}