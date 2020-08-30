#include <bits/stdc++.h>
using namespace std;

int n, a[100], dp[100][100], br[100][100];
void print(int i, int j)
{
    if(i == j)
    {
        cout << char(i+'A'-1);
        return;
    }
    cout << "(";
    print(i, br[i][j]);
    print(br[i][j]+1, j);
    cout << ")";
}
int fun(int i, int j)
{
    if(i == j)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
    int ans = INT_MAX;
    for(int k = i ; k < j ; k++)
    {
        int mult = fun(i, k) + fun(k+1, j) + a[i-1]*a[k]*a[j];
        if(ans > mult)
        {
            br[i][j] = k;
            ans = mult;
        }
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
	    cin >> n;
	    memset(dp, -1, sizeof(dp));
	    for(int i = 0 ; i < n ; i++)
	        cin >> a[i];
	    fun(1, n-1);
	    print(1, n-1);
	    cout << "\n";
	}
	return 0;
}