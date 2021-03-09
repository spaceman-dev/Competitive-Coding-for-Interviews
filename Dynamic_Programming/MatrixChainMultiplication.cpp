// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int dp[105][105];
    int MCM(int arr[], int i, int j)
    {
        if(dp[i][j] != -1)
            return dp[i][j];
        if(i >= j)
            return 0;
        dp[i][j] = INT_MAX;
        for(int k = i ; k < j ; k++)
            dp[i][j] = min((MCM(arr, i, k) + MCM(arr, k+1, j) + (arr[i-1] * arr[k] * arr[j])), dp[i][j]);
        return dp[i][j];
    }
    int matrixMultiplication(int n, int arr[])
    {
        // code here
        memset(dp, -1, sizeof(dp));
        return MCM(arr, 1, n-1);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends