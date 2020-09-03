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
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    string s1 = s;
	    reverse(s1.begin(), s1.end());
	    int dp[n+1][n+1];
	    for(int i = 0 ; i <= n ; i++)
	    {
	        for(int j = 0 ; j <= n ; j++)
	        {
	            if(i == 0 || j == 0)
	            {
	                dp[i][j] = 0;
	                continue;
	            }
	            if(s[i-1] == s1[j-1])
	                dp[i][j] = dp[i-1][j-1] + 1;
	            else
	                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
	        }
	    }
	    cout << n-dp[n][n] << "\n";
	}
	return 0;
}