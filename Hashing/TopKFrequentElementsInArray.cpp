// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    static bool comp(const pair<int, int> &p1, const pair<int, int> &p2)
    {
        if(p1.second == p2.second)
            return p1.first > p2.first;
        else
            return p1.second > p2.second;
    }
    vector<int> topK(vector<int>& nums, int k)
    {
        // Code here
        vector<int> v;
        vector<pair<int, int>> mpv;
        map<int, int> mp;
        for(auto i : nums)
            mp[i]++;
        for(auto i : mp)
            mpv.push_back(make_pair(i.first, i.second));
        sort(mpv.begin(), mpv.end(), comp);
        for(int i = 0 ; i < k ; i++)
            v.push_back(mpv[i].first);
        return v;
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends