// { Driver Code Starts
// C++ program to find minimum number of swaps
// required to sort an array
#include<bits/stdc++.h>
using namespace std;

int minSwaps(int A[], int N);

// Driver program to test the above function
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    cout<<minSwaps(a,n)<<endl;
	}
}

// } Driver Code Ends


/* You are required to complete this method */

// return the minimum number of swaps required to sort the arra
int minSwaps(int arr[], int n)
{
    /*Your code here */
    pair<int, int>parr[n];
    for(int i = 0 ; i < n ; i++)
    {
        parr[i].first = arr[i];
        parr[i].second = i;
    }
    sort(parr, parr + n);
    int vis[n];
    memset(vis, 0, sizeof(vis));
    int swaps = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(vis[i] || parr[i].second == i)
            continue;
        int j = i;
        int cycle = 0;
        while(!vis[j])
        {
            vis[j] = 1;
            j = parr[j].second;
            cycle++;
        }
        if(cycle)
            swaps += cycle - 1;
    }
    return swaps;
}