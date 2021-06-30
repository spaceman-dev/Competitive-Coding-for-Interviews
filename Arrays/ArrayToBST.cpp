// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    void sortArrBST(vector<int> &nums, int smol, int big, vector<int> &res, int &i)
    {
        if(smol <= big)
        {
            int m = smol + (big - smol)/2;
            res[i++] = nums[m];
            sortArrBST(nums, smol, m - 1, res, i);
            sortArrBST(nums, m + 1, big, res, i);
        }
    }
    vector<int> sortedArrayToBST(vector<int>& nums)
    {
        // Code here
        vector<int> res(nums.size(), 0);
        int i = 0;
        sortArrBST(nums, 0, nums.size() - 1, res, i);
        return res;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends