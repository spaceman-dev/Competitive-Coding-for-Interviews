#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//code
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
	    dp[0] = arr[0];
	    for(int i = 1 ; i < n ; i++)
	    {
	        dp[i] = arr[i];
	        for(int j = 0 ; j < i ; j++)
	        {
	            if(arr[i] > arr[j] && dp[i] < dp[j] + arr[i])
	                dp[i] = dp[j] + arr[i];
	        }
	    }
	    sort(dp, dp + n, greater<int>());
	    cout << dp[0] << endl;
	}
	return 0;
}