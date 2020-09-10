#include <bits/stdc++.h>
using namespace std;

int main() 
{
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int dp[n+1][n+1];
	    memset(dp, 0, sizeof(dp));
	    string s;
	    cin >> s;
	    int count = 0;
	    for(int i = n-1 ; i > 0 ; i--)
	    {
	        for(int j = i+1 ; j <= n ; j++)
	        {
	            if(s[i-1] == s[j-1])
	            {
	                if(j == i+1 || j == i+2)
	                    dp[i][j] = 1;
	                else
	                    dp[i][j] = dp[i+1][j-1];
	                if(dp[i][j] == 1)
	                    count++;
	            }
	        }
	    }
	    cout << count << "\n";
	}
	return 0;
}