// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int n)
    {
        // your code here
        int res = arr[0], max1 = arr[0];
        int pos1 = 0;
        for(int i = 1 ; i < 2 * (n - 1) ; i++)
        {
            int ind = (i > n-1) ? i % n : i;
            if(pos1 == ind)
            {
                ind = pos1 + 1;
                ind = (ind > n - 1) ? ind % n : ind;
                i = ind;
                max1 = arr[ind];
                pos1 = ind;
                continue;
            }
            if(max1 > 0)
                max1 += arr[ind];
            else
            {
                max1 = arr[ind];
                pos1 = ind;
            }
            res = max(res, max1); 
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends