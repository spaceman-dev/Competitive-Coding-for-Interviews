// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array
int minJumps(int arr[], int n)
{
    // Your code here
    int minJump = 0, currFar = 0, currEnd = 0;
    for(int i = 0 ; i < n-1 ; i++)
    {
        currFar = max(currFar, i + arr[i]);
        if(currFar >= n-1)
            return 1 + minJump;
        if(currFar == i)
            return -1;
        if(currEnd == i)
            minJump++, currEnd = currFar;
    }
    return minJump;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
            
        cout<<minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends