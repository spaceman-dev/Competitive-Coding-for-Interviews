#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll dp[101][101];
ll countInArray(int n, int m, int ind)
{   
    if(dp[n][ind] != -1)
        return dp[n][ind];
    if(n == 0)
        return dp[n][ind] = 1;
    ll sum = 0;
    for(int i = 1 ; i <= m ; i++)
    {
         if(ind % i == 0 || i % ind == 0)
             sum = (sum % mod + countInArray(n-1, m, i) % mod) % mod;
    }
    return dp[n][ind] = sum;
}
int main() 
{
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	    int n, m;
	    cin >> n >> m;
	    memset(dp, -1, sizeof(dp));
	    cout << countInArray(n, m, 0) << "\n";
	}
	return 0;
}