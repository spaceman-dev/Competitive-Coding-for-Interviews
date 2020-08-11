#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int knapsack(int *wt, int *val, int w, int n)
{
    if(n == 0 || w == 0)
        return 0;
    if(dp[n][w] != -1)
        return dp[n][w];
    if(wt[n-1] <= w)
        return dp[n][w] = max((val[n-1] + knapsack(wt, val, w - wt[n-1], n-1)), knapsack(wt, val, w, n-1));
    else //if(wt[n-1] > w)
        return dp[n][w] = knapsack(wt, val, w, n-1);
}
int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    memset(dp, -1, sizeof(dp));
	    int n;
	    cin >> n;
	    int w;
	    cin >> w;
	    int wt[n];
	    int val[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> val[i];
	    for(int i = 0 ; i < n ; i++)
	        cin >> wt[i];
	    cout << knapsack(wt, val, w, n) << endl;
	}
	return 0;
}