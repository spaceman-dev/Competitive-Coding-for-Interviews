// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int, int> mp;
	    mp.insert({0, -1});
	    int sum = 0, res = 0;
	    for(int i = 0 ; i < n ; i++)
	    {
	        sum += arr[i];
	        if(mp.find(((sum % k) + k) % k) != mp.end())
	            res = max(res, i - mp[((sum % k) + k) % k]);
            else
                mp.insert({((sum % k) + k) % k, i});
	    }
	    return res;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends