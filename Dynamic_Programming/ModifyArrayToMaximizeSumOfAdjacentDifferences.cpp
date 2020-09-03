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
	    int arr[n];
	    int dp[n][2];
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    dp[0][0] = 0, dp[0][1] = 0;
	    for(int i = 0 ; i < n-1 ; i++)
	    {
	        dp[i+1][0] = max(dp[i][0], (dp[i][1] + abs(arr[i] - 1)));
	        dp[i+1][1] = max((dp[i][0] + abs(arr[i+1] - 1)), (dp[i][1] + abs(arr[i+1] - arr[i])));
	    }
	    cout << max(dp[n-1][0], dp[n-1][1]) << "\n";
	}
	return 0;
}