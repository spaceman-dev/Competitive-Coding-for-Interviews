#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int goldmine(int mat[][21], int i, int j, int n, int m, int dp[][21])
{
    if(i < 0 || i >= n || j < 0 || j >= m)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
    return dp[i][j] = mat[i][j] + max(goldmine(mat, i-1, j+1, n, m, dp), max(goldmine(mat, i, j+1, n, m, dp), goldmine(mat, i+1, j+1, n, m, dp)));
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
	    int n, m;
	    cin >> n >> m;
	    int mat[n][21];
	    for(int i = 0 ; i < n ; i++)
	    {
	        for(int j = 0 ; j < m ; j++)
	            cin >> mat[i][j];
	    }
	    int dp[n][21];
	    memset(dp, -1, sizeof(dp));
	    int res = -1;
	    for(int i = 0 ; i < n ; i++)
	    {
	        for(int j = 0 ; j < m ; j++)
	            res = max(res, goldmine(mat, i, j, n, m, dp));
	    }
	    cout << res << "\n";
	}
	return 0;
}