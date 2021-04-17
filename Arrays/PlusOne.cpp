// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int n)
    {
        // code here
        int carry = 1;
        for(int i = n-1 ; i >= 0 ; i--)
        {
            arr[i] = arr[i] + carry;
            if(arr[i] > 9)
            {
                carry = arr[i] / 10;
                arr[i] %= 10;
            }
            else
            {
                carry = 0;
                break;
            }
        }
        if(carry != 0)
            arr.insert(arr.begin(), carry);
        return arr;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends