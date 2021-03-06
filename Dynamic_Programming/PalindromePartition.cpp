// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution{
public:
    bool isPalin(string s, int i, int j)
    {
        while(i <= j)
        {
            if(s[i++] != s[j--])
                return false;
        }
        return true;
    }
    int palinPart(string s, int i, int j, int dp[][501])
    {
        if(dp[i][j] != -1)
            return dp[i][j];
        if((i == j) || isPalin(s, i, j))
            return dp[i][j] = 0;
        else
        {
            int res = INT_MAX;
            for(int k = i ; k < j ; k++)
            {
                int temp = 0;
                if(isPalin(s, i, k))
                    temp = palinPart(s, k+1, j, dp);
                else
                {
                    dp[i][k] = 0;
                    continue;
                }
                res = min(res, 1 + temp);
            }
            return dp[i][j] = res;
        }
    }
    int palindromicPartition(string s)
    {
        // code here
        int l = s.length();
        int dp[501][501];
        memset(dp, -1, sizeof(dp));
        return palinPart(s, 0, l-1, dp);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends