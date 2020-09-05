#include <bits/stdc++.h>
using namespace std;

int zigzag(int mat[][101], int i, int j, int n, int dp[][101])
{
    if(i >= n)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
    int ans = 0;
    for(int k = 0 ; k < n ; k++)
    {
        if(k != j || i == 0)
            ans = max(ans, mat[i][k] + zigzag(mat, i+1, k, n, dp));
    }
    return dp[i][j] = ans;
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
	    int mat[n][101];
	    for(int i = 0 ; i < n ; i++)
	    {
	        for(int j = 0 ; j < n ; j++)
	            cin >> mat[i][j];
	    }
	    int dp[101][101];
	    memset(dp, -1, sizeof(dp));
	    cout << zigzag(mat, 0, 0, n, dp) << "\n";
	}
	return 0;
}