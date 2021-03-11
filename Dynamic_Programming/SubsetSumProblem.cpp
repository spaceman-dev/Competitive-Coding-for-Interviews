// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution
{   
public:
    bool isSubsetSum(int n, int arr[], int sum)
    {
        // code here
        bool dp[n+1][sum+1];
        for(int i = 0 ; i <= n ; i++)
        {
            for(int j = 0 ; j <= sum ; j++)
            {
                if(j == 0)
                    dp[i][j] = 1;
                else if(i == 0)
                    dp[i][j] = 0;
                else if(j < arr[i-1])
                    dp[i][j] = dp[i-1][j];
                else if(j >= arr[i-1])
                    dp[i][j] = (dp[i-1][j] || dp[i-1][j - arr[i-1]]);
            }
        }
        return dp[n][sum];
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends