// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countTriplets(int arr[], int n, int l, int r)
    {
        // code here
        sort(arr, arr+n);
        int countr = 0, countl = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int lr = i+1, rr = n-1, ll = i+1, rl = n-1;
            while(lr < rr)
            {
                if(arr[i] + arr[lr] + arr[rr] <= r)
                    countr += rr - lr, lr++;
                else
                    rr--;
            }
            while(ll < rl)
            {
                if(arr[i] + arr[ll] + arr[rl] < l)
                    countl += rl - ll, ll++;
                else
                    rl--;
            }
        }
        return countr - countl;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int Arr[N];
        for (int i = 0; i < N; i++) cin >> Arr[i];
        int L, R;
        cin >> L >> R;
        Solution obj;
        cout << obj.countTriplets(Arr, N, L, R) << endl;
    }
    return 0;
}  // } Driver Code Ends