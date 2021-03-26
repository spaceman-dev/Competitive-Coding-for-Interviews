// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minCostRec(string X, string Y, int n, int m, int costX, int costY)
	{
	    if(n == 0)
	        return costY*m;
	    if(m == 0)
	        return costX*n;
	    if(X[n-1] == Y[m-1])
	        return minCostRec(X, Y, n-1, m-1, costX, costY);
	    else
	        return min(costX+costY+minCostRec(X, Y, n-1, m-1, costX, costY), min(costX+minCostRec(X, Y, n-1, m, costX, costY), costY+minCostRec(X, Y, n, m-1, costX, costY)));
	}
	int findMinCost(string X, string Y, int costX, int costY)
	{
	    // Your code goes here
	    int n = X.length(), m = Y.length();
	    int dp[n+1][m+1];
	    memset(dp, 0, sizeof(dp));
	    for(int i = 0 ; i <= n ; i++)
	    {
	        for(int j = 0 ; j <= m ; j++)
	        {
	            if(i == 0)
	                dp[i][j] = costY * j;
	            else if(j == 0)
	                dp[i][j] = costX * i;
	            else if(X[i-1] == Y[j-1])
	                dp[i][j] = dp[i-1][j-1];
	            else
	                dp[i][j] = min(costX + costY + dp[i-1][j-1], min(costX + dp[i-1][j], costY + dp[i][j-1]));
	        }
	    }
	    return dp[n][m];
	}
  

};
	

// { Driver Code Starts.
int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
       	string x, y;
       	cin >> x >> y;
        
       	int costX, costY;
       	cin >> costX >> costY;

        

        Solution ob;
        cout << ob.findMinCost(x, y, costX, costY);
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends