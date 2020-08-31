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
	    int sum = 0;
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    int dp[n+1][sum/2 + 1];
	    for(int i = 0 ; i <= n ; i++)
	    {
	        for(int j = 0 ; j <= sum/2 ; j++)
	        {
	            if(j == 0)
	                dp[i][j] = true;
	            else if(i == 0)
	                dp[i][j] = false;
	            else if(arr[i-1] <= j)
	                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
	            else
	                dp[i][j] = dp[i-1][j];
	        }
	    }
	    int ind = INT_MIN;
	    for(int i = 0 ; i <= sum/2 ; i++)
	    {
	        if(dp[n][i])
	            ind = max(ind, i);
	    }
	    cout << (sum - 2*ind) << "\n";
	}
	return 0;
}