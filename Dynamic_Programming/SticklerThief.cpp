#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
	//code
	fastio;
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n], dp[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    dp[0] = arr[0], dp[1] = max(arr[0], arr[1]);
	    for(int i = 2 ; i < n ; i++)
	        dp[i] = max(arr[i] + dp[i-2], dp[i-1]);
	    cout << dp[n-1] << "\n";
	}
	return 0;
}
