#include <bits/stdc++.h>
using namespace std;

int main() 
{
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  
	int dp[10001];
	dp[0] = 0, dp[1] = 0;
    dp[2] = 1, dp[3] = 1;
    for(int i = 4 ; i < 10001 ; i++)
    {
        dp[i] = dp[i-1] + 1;
        if(i%2 == 0)
            dp[i] = min(dp[i], dp[i/2] + 1);
        if(i%3 == 0)
            dp[i] = min(dp[i], dp[i/3] + 1);
    }
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    cout << dp[n] << "\n";
	}
	return 0;
}