#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int minMoves(string s, int n, int dp[100000])
{
    if(n <= 0)
        return 0;
    if(n == 1)
        return 1;
    if(n % 2 == 1)
        return dp[n] = 1 + minMoves(s, n-1, dp);
    if(s.substr(0, n/2) == s.substr(n/2, n/2))
        return dp[n] = 1 + minMoves(s, n/2, dp);
    return dp[n] = 1 + minMoves(s, n-1, dp);
}
int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    int dp[100000];
	    memset(dp, -1, sizeof(dp));
	    cout << minMoves(s, s.length(), dp) << endl;
	}
	return 0;
}