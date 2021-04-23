// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;


 // } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target)
    {
        // Your code goes here
        int res = INT_MIN, minDiff = INT_MAX;
        sort(arr.begin(), arr.end());
        for(int i = 0; i < arr.size(); i++)
        {
            int sum = arr[i];
            int l = i+1, h = arr.size()-1;
            while(l < h)
            {
                int temp = sum + arr[l] + arr[h];
                int diff = abs(target - temp);
                if(diff == 0)
                    return temp;
                else if(temp < target)
                    l++;
                else
                    h--;
                if(minDiff == diff)
                    res = max(res, temp);
                else
                {
                    minDiff = min(diff, minDiff);
                    if(minDiff == diff)
                        res = temp;
                }
            }
        }
        return res;
    }
};



// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        int n,target;
        cin >> n >> target;
        
        vector<int> vec(n);
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> vec[i];
        Solution obj;
        cout << obj.threeSumClosest(vec, target) << "\n";
    }
}

//Position this line where user code will be pasted.
  // } Driver Code Ends