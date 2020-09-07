#include <bits/stdc++.h>
using namespace std;

int main() 
{
	//code
    // Can be also done as Nth Catalan Number
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int dp[n+1];
	    dp[0] = 1;
        for(int i = 1 ; i <= n ; i++)
        {
            dp[i] = 0;
            for(int j = 0 ; j < i ; j++)
                dp[i] += dp[j] * dp[i-j-1];
        }
        cout << dp[n] << "\n";
	}
	return 0;
}