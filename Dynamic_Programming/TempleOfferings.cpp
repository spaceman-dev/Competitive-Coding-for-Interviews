// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution
{
public:
    int offerings(int n, int arr[])
    {
        // code here
        int dp[n];
        fill(dp, dp+n, 1);
        for(int i = 0 ; i < n-1 ; i++)
        {
            if(arr[i+1] > arr[i])
                dp[i+1] = dp[i] + 1;
        }
        int sum = 0;
        for(int i = n-1 ; i > 0 ; i--)
        {
            if(arr[i-1] > arr[i] && dp[i-1] <= dp[i])
                dp[i-1] = dp[i] + 1;
            sum += dp[i];
        }
        sum += dp[0];
        return sum;
    }
};

// { Driver Code Starts.

int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.offerings(N, arr)<<"\n";
    }
    return 0;
}  // } Driver Code Ends