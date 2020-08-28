#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int cutsegments(int n, int x, int y, int z, int dp[])
{
    if(n == 0)
        return 0;
    if(n < 0)
        return INT_MIN;
    if(dp[n] != -1)
        return dp[n];
    return dp[n] = 1 + max(cutsegments(n-x, x, y, z, dp), max(cutsegments(n-y, x, y, z, dp), cutsegments(n-z, x, y, z, dp)));
}
int main()
{
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	    int n, x, y, z;
	    cin >> n >> x >> y >> z;
	    int dp[n+1];
	    memset(dp, -1, sizeof(dp));
	    cout << cutsegments(n, x, y, z, dp) << "\n";
	}
	return 0;
}