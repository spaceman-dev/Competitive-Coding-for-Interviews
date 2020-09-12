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
	    if(n == 1)
	    {
	        cout << arr[0] << "\n";
	        continue;
	    }
	    if(n == 2)
	    {
	        cout << min(arr[0], arr[1]) << "\n";
	        continue;
	    }
	    dp[0] = arr[0];
	    dp[1] = arr[1];
	    dp[2] = arr[2];
	    for(int i = 3  ; i < n ; i++)
	        dp[i] = arr[i] + min(dp[i-1], min(dp[i-2], dp[i-3]));
	    cout << min(dp[n-1], min(dp[n-2], dp[n-3])) << "\n";
	}
	return 0;
}