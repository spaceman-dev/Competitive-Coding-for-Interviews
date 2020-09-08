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
	    string s1, s2;
	    cin >> s1 >> s2;
	    for(int i = 0 ; i <= n ; i++)
	    {
	        for(int j = 0 ; j <= m ; j++)
	        {
	            if(i == 0 || j == 0)
	                dp[i][j] = 0;
	            else if(s1[i-1] == s2[j-1])
	                dp[i][j] = dp[i-1][j-1] + 1;
	            else
	                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
	        }
	    }
	    cout << n + m - 2*dp[n][m] << "\n";
	}
	return 0;
}