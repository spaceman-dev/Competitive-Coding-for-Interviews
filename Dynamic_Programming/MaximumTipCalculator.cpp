#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
long long dp[110][220][220];
long long maxtipcalc(int n, int i, int x, int y, int *a, int *b)
{
    if(i >= n)
        return 0;
    if(dp[i][x][y] != -1)
        return dp[i][x][y];
    if(x <= 0)
        return dp[i][x][y] = (b[i] + maxtipcalc(n, i+1, x, y-1, a, b));
    if(y <= 0)
        return dp[i][x][y] = (a[i] + maxtipcalc(n, i+1, x-1, y, a, b));
    return dp[i][x][y] = max(a[i] + maxtipcalc(n, i+1, x-1, y, a, b), b[i] + maxtipcalc(n, i+1, x, y-1, a, b));
}
int main()
{
	//code
	fastio;
	int t;
	cin >> t;
	while(t--)
	{
	    int n, x, y;
	    cin >> n >> x >> y;
	    int a[n], b[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> a[i];
	    for(int i = 0 ; i < n ; i++)
	        cin >> b[i];
	    memset(dp, -1, sizeof(dp));
	    cout << maxtipcalc(n, 0, x, y, a, b) << "\n";
	}
	return 0;
}
