#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int dp[50];
int skipWork(int arr[], int n)
{
    if(n <= 0)
        return 0;
    if(dp[n] != -1)
        return dp[n];
    return dp[n] = min(arr[n-1] + skipWork(arr, n-1), arr[n-2] + skipWork(arr, n-2));
}
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
	    memset(dp, -1, sizeof(dp));
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    cout << skipWork(arr, n) << endl;
	}
	return 0;
}