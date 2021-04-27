// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256


 // } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s)
    {
        //code
        int l = 0, res = 0;
        map<char, int> mp;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(mp.find(s[i]) != mp.end())
                l = max(l, mp[s[i]]+1);
            res = max(res, i - l + 1);
            mp[s[i]] = i;
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}  // } Driver Code Ends