// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    string Reduced_String(int k, string s)
    {
        // Your code goes here
        string res = "";
        if(k == 1)
            return res;
        int count = 0;
        stack<pair<char, int>> st;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(st.empty())
            {
                count = 1;
                st.push(make_pair(s[i], count));
            }
            else if(st.top().first == s[i])
            {
                count = st.top().second + 1;
                st.push(make_pair(s[i], count));
                if(count == k)
                {
                    while(count--)
                        st.pop();
                }
            }
            else
            {
                count = 1;
                st.push(make_pair(s[i], count));
            }
        }
        while(!st.empty())
        {
            res += st.top().first;
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

// { Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}  // } Driver Code Ends