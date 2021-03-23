// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long optimalWalk(long long n, long long A, long long B)
    {
        // code here
        // if(N == 0)
        //     return 0;
        // else if(N == 1)
        //     return A;
        // else
        //     return min(A + optimalWalk(N-1, A, B), B + (N % 2)*A + optimalWalk((N+1)/2, A, B));
        long long dp[n+1];
        dp[0] = 0, dp[1] = A;
        for(int i = 2 ; i <= n ; i++)
            dp[i] = min(A + dp[i-1], (i % 2) * A + B + dp[(i+1)/2]);
        return dp[n];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N, A, B;
        cin>>N>>A>>B;
        
        Solution ob;
        cout<<ob.optimalWalk(N, A, B)<<"\n";
    }
    return 0;
}  // } Driver Code Ends