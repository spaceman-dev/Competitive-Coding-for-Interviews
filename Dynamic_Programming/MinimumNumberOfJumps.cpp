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
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    int dp[n];
	    dp[0] = 0;
	    for(int i = 1 ; i < n ; i++)
	    {
	        dp[i] = 100000000;
	        for(int j = 0 ; j < i ; j++)
	        {
	            if(j + arr[j] >= i)
	                dp[i] = min(dp[i], dp[j]+1);
	        }
	    }
	    if(dp[n-1] == 100000000)
	        cout << "-1" << "\n";
	    else
	        cout << dp[n-1] << "\n";
	}
	return 0;
}