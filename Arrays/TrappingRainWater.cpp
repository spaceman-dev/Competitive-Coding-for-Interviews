// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n)
    {
        // Code here
        int cap = 0, lmax = arr[0], rmax = arr[n-1];
        int i = 0, j = n-1;
        while(i < j)
        {
            lmax = max(arr[i], lmax);
            rmax = max(arr[j], rmax);
            cap += (lmax > rmax) ? (rmax - arr[j--]) : (lmax - arr[i++]);
        }
        return cap;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends