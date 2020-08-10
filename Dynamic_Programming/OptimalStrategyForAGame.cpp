#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int dp[200][200];
int min(int a, int b)
{
    return a < b ? a : b;
}
int max(int a, int b)
{
    return a > b ? a : b;
}
int game(int a[], int i, int j, int dp[200][200])
{
    if(i == j) 
        return a[i];
    if(j == i + 1)
        return max(a[i], a[j]);
    if(dp[i][j] != -1) 
        return dp[i][j];
    dp[i][j] = max(a[i] + min(game(a, i + 2, j, dp), game(a , i + 1, j - 1, dp)), a[j] + min(game(a, i , j - 2, dp), game(a, i + 1, j - 1, dp)));
    return dp[i][j];
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
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    memset(dp, -1, sizeof(dp));
	    cout << game(arr, 0, n - 1, dp) << endl;
	}
	return 0;
}