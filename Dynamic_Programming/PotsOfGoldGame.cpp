// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int maxCoins(int A[],int );


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		cout<<maxCoins(a,n)<<endl;
		
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete below method */
int potGold(int A[], int i, int n, int dp[][101])
{
    if(i > n)
        return 0;
    if(dp[i][n] != -1)
        return dp[i][n];
    return dp[i][n] = max(A[i] + min(potGold(A, i+2, n, dp), potGold(A, i+1, n-1, dp)) , A[n] + min(potGold(A, i+1, n-1, dp), potGold(A, i, n-2, dp)));
}
int maxCoins(int A[],int N)
{
   //Your code here
   int dp[N][101];
   memset(dp, -1, sizeof(dp));
   return potGold(A, 0, N-1, dp);
}