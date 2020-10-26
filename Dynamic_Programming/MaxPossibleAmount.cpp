// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	int maxPossibleAmount(int *arr, int i, int j, int dp[][1002])
	{
	    if(dp[i][j] != -1)
	        return dp[i][j];
	    if(i == j)
	        return arr[i];
	    if(i == j-1)
	        return max(arr[i], arr[j]);
	    return dp[i][j] = max(arr[i] + min(maxPossibleAmount(arr, i+2, j, dp), maxPossibleAmount(arr, i+1, j-1, dp)), arr[j] + min(maxPossibleAmount(arr, i, j-2, dp), maxPossibleAmount(arr, i+1, j-1, dp)));
	}

	int maxAmount(int arr[], int n)
	{
		
		// Your code goes here
		int dp[1002][1002];
	    memset(dp, -1, sizeof(dp));
	    return maxPossibleAmount(arr, 0, n-1, dp);
	}
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

	   

	    Solution ob;
	    cout << ob.maxAmount(a, n) << "\n";

	     
    }
    return 0;
}
  // } Driver Code Ends
