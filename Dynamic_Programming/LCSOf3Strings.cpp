#include<bits/stdc++.h>
using namespace std;

int dp[101][101][101];
int lcs(string &s1, int n, string &s2, int m, string &s3, int k)
{
    if(n <= 0 || m <= 0 || k <= 0)
        return 0;
    if(dp[n][m][k] != -1)
        return dp[n][m][k];
    if(s1[n-1] == s2[m-1] && s1[n-1] == s3[k-1]) 
        return dp[n][m][k] = 1 + lcs(s1, n-1, s2, m-1, s3, k-1);
    if(s1[n-1] == s2[m-1] && s1[n-1] != s3[k-1]) 
        return dp[n][m][k] = max(lcs(s1, n, s2, m, s3, k-1), lcs(s1, n-1, s2, m-1, s3, k));
    if(s1[n-1] == s3[k-1] && s1[n-1] != s2[m-1])
        return dp[n][m][k] = max(lcs(s1, n, s2, m-1, s3, k), lcs(s1, n-1, s2, m, s3, k-1));
    if(s2[m-1] == s3[k-1] && s1[n-1] != s2[m-1])
        return dp[n][m][k] = max(lcs(s1, n-1, s2, m, s3, k), lcs(s1, n, s2, m-1, s3, k-1));
    return dp[n][m][k] = max({lcs(s1, n-1, s2, m, s3, k), lcs(s1, n, s2, m-1, s3, k), lcs(s1, n, s2, m, s3, k-1)});
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        memset(dp, -1, sizeof(dp));
        int n, m, k;
        cin >> n >> m >> k;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        cout << lcs(s1, n, s2, m, s3, k) << "\n";
    }
}