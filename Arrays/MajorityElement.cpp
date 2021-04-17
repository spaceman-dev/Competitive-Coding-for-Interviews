// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int n)
    {
        // your code here
        int maxCountEle = arr[0], maxCount = 1, count = 0;
        for(int i = 1 ; i < n ; i++)
        {
            if(arr[i] != maxCountEle)
                maxCount--;
            else
                maxCount++;
            if(maxCount == 0)
            {
                maxCountEle = arr[i];
                maxCount = 1;
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i] == maxCountEle)
                count++;
            if(count > n/2)
                return maxCountEle;
        }
        return -1;
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends