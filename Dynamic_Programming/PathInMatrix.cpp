#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pathmatrix(int mat[][21], int i, int j, int n, int dp[][21])
{
    if(i < 0 || i >= n || j < 0 || j >= n)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
    int x = pathmatrix(mat, i+1, j-1, n, dp);
    int y = pathmatrix(mat, i+1, j, n, dp);
    int z = pathmatrix(mat, i+1, j+1, n, dp);
    return dp[i][j] = mat[i][j] + max(x, max(y, z));
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
	    int n;
	    cin >> n;
	    int mat[n][21];
	    for(int i = 0 ; i < n ; i++)
	    {
	        for(int j = 0 ; j < n ; j++)
	            cin >> mat[i][j]; 
	    }
	    int dp[n][21];
	    memset(dp, -1, sizeof(dp));
	    int res = -1;
	    for(int i = 0 ; i < n ; i++)
	    {
	        int j = pathmatrix(mat, 0, i, n, dp);
	        res = max(res, j);
	    }
	    cout << res << "\n";
	}
	return 0;
}