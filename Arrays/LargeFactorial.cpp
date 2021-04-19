// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution{
public:
    vector<long long> factorial(vector<long long> a, int n)
    {
        long long maxele = *max_element(a.begin(), a.end());
        long long fact[maxele + 1];
        vector<long long> v;
        fact[0] = fact[1] = 1;
        for(long long i = 2 ; i <= maxele ; i++)
            fact[i] = (fact[i-1] * i) % 1000000007;
        for(int i = 0 ; i < n ; i++)
            v.push_back(fact[a[i]]);
        return v;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<long long> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<long long> res = ob.factorial(a, n);
        for (i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends