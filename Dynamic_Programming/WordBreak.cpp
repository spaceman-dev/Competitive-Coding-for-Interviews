#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int wordBreak(unordered_set<string>dict, string s, vector<int>dp, int l)
{
    if(l == s.length())
        return 1;
    if(dp[l] != -1)
        return dp[l];
    for(int i = l+1 ; i <= s.length() ; i++)
    {
        if(dict.find(s.substr(l, i-l)) != dict.end())
        {
            if(wordBreak(dict, s, dp, i))
            {
                dp[l] = 1;
                return dp[l];
            }
        }
    }
    dp[l] = 0;
    return dp[l];
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
	    unordered_set<string> dict(n);
	    string s1;
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> s1;
	        dict.insert(s1);
	    }
	    string s;
	    cin >> s;
	    vector<int>dp(s.length(), -1);
	    cout << wordBreak(dict, s, dp, 0) << endl;
	}
	return 0;
}