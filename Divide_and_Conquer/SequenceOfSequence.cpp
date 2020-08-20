#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int seqseq(int dp[][102], int i, int j)
{
    if(j > i)
        return 0;
    if(j == 0)
        return 1;
    if(dp[i][j] != -1)
        return dp[i][j];
    else
        return dp[i][j] = seqseq(dp, i/2, j-1) + seqseq(dp, i-1, j);
}
int main()
{
    int dp[102][102];
    memset(dp, -1, sizeof(dp));
    int t;
    cin >> t;
    while(t--)
    {
        int m, n;
        cin >> m >> n;
        cout << seqseq(dp, m, n) << endl;     
    }
}