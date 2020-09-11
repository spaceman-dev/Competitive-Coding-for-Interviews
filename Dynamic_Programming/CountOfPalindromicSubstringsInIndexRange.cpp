#include <bits/stdc++.h>
using namespace std;

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
	    int n, q1, q2;
	    cin >> n;
	    string s;
	    cin >> s;
	    cin >> q1 >> q2;
	    string s1 = "";
	    for(int i = min(q1, q2) ; i <= max(q1, q2) ; i++)
	        s1 += s[i];
	    int count = s1.length();
	    int dp[s1.length()][s1.length()];
	    for(int i = 0 ; i < s1.length() ; i++)
	        dp[i][i] = 1;
	    for(int i = 0 ; i < s1.length() ; i++)
	    {
	        if(s1[i] == s1[i+1])
	        {
	            dp[i][i+1] = 1;
	            count++;
	        }
	        else
	            dp[i][i+1] = 0;
	    }
        for(int i = 2 ; i < s1.length() ; i++)
        {
            for(int j = 0 ; j < s1.length()-i ; j++)
            {
                if(s1[j] == s1[i+j] && dp[j+1][i+j-1])
                {
                    dp[j][i+j] = 1;
                    count++;
                }
                else
                    dp[j][i+j] = 0;
            }
        }
        cout << count << "\n";
	}
	return 0;
}