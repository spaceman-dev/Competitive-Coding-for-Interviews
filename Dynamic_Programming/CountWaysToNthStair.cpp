// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

long long mod =1000000007;

long long countWays(int);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m;
        cin>>m;
        cout<<countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}// } Driver Code Ends


// function to count ways to reach mth stair
long long countWays(int m)
{
    // your code here
    long long dp[m+1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for(int i = 1 ; i <= m ; i++)
        dp[i] += dp[i-1];
    for(int i = 2 ; i <= m ; i++)
        dp[i] += dp[i-2];
    return dp[m];
}