#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int longestCommonSubsequence(string s1, string s2)
{
    int dp[s1.size() + 1][s2.size() + 1];
    for(int i = 0 ; i <= s1.size() ; i++)
    {
        for(int j = 0 ; j <= s1.size() ; j++)
        {
            if(i == 0 || j == 0)
            {
                dp[i][j] = 0;
                continue;
            }
            if(s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }
    return dp[s1.size()][s2.size()];
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
	    string s1 = s;
	    reverse(s.begin(), s.end());
	    cout << (s.size() - longestCommonSubsequence(s, s1)) << endl;
	}
	return 0;
}