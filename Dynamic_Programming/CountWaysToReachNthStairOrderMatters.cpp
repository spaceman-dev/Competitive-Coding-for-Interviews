#include <bits/stdc++.h>
using namespace std;

int main()
{
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long dp[100002];
	dp[0] = 1;
	dp[1] = 2;
	for(int i = 2 ; i < 100002 ; i++)
	    dp[i] = (dp[i-1] + dp[i-2]) % 1000000007;
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    cout << dp[n-1] << "\n";
	}
	return 0;
}