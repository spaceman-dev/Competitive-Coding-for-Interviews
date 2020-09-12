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
	    int arr[n], dp[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    dp[0] = arr[0];
	    dp[1] = dp[0] + arr[1];
		dp[2] = max(dp[1], max(arr[1] + arr[2], dp[0] + arr[2]));
	    for(int i = 3 ; i < n ; i ++)
			dp[i] = max(dp[i-1], max(arr[i] + dp[i-2], dp[i-3] + arr[i] + arr[i-1]));
        cout << dp[n-1] << "\n";
	}
	return 0;
}