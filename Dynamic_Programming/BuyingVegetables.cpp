// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minCost(int n, vector<int> cost[])
    {
        // code here
        int dp[n][3];
        for(int i = 0 ; i < 3; i++)
            dp[0][i] = cost[0][i];
        for(int i = 1 ; i < n ; i++)
        {
            dp[i][0] = cost[i][0] + min(dp[i-1][1], dp[i-1][2]);
            dp[i][1] = cost[i][1] + min(dp[i-1][0], dp[i-1][2]);
            dp[i][2] = cost[i][2] + min(dp[i-1][0], dp[i-1][1]);
        }
        return min(dp[n-1][0], min(dp[n-1][1], dp[n-1][2]));
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> cost[N];
        int x, y, z;
        for(int i = 0;i < N;i++){
            cin>>x>>y>>z;
            cost[i].push_back(x);
            cost[i].push_back(y);
            cost[i].push_back(z);
        }
        
        Solution ob;
        cout<<ob.minCost(N, cost)<<"\n";
    }
    return 0;
}  // } Driver Code Ends