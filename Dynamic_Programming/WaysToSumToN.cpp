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
	    int m, n;
	    cin >> m >> n;
	    int arr[m];
	    for(int i = 0 ; i < m ; i++)
	        cin >> arr[i];
	    long long dp[n+1];
	    memset(dp, 0, sizeof(dp));
	    dp[0] = 1;
	    for(int i = 1 ; i <= n ; i++)
	    {
	        for(int j = 0 ; j < m ; j++)
	        {
	            if(i >= arr[j])
	                dp[i] += dp[i-arr[j]]%1000000007; 
	        }
	    }
	    cout << dp[n]%1000000007 << "\n";
	}
	return 0;
}