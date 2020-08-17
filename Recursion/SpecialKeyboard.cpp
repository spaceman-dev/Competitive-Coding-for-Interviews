#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int specialKeyboard(int n)
{
    int dp[n+1];
    memset(dp, 0, sizeof(dp));
    if(n < 7)
        return n;
    for(int i = 0 ; i < 7 ; i++)
        dp[i] = i;
    for(int i = 7 ; i <= n ; i++)
    {
        int count = 2;
        for(int j = i-3 ; j > 0 ; j--)
        {
            dp[i] = max(dp[i], count * dp[j]);
            count++;
        }
    }
    return dp[n];
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
	    if(n > 75)
	        cout << "-1" << endl;
	    else
	        cout << specialKeyboard(n) << endl;
	}
	return 0;
}