// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    string removeKdigits(string s, int k)
    {
        stack<char> st;
        string res = "";
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(st.empty() || s[i] >= st.top())
                st.push(s[i]);
            else
            {
                while(!st.empty() && k > 0 && s[i] < st.top())
                {
                    k--;
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(k--)
            st.pop();
        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        int precedingZero = 0;
        while(precedingZero < res.length() && res[precedingZero] == '0')
            precedingZero++;
        if(precedingZero == res.length())
            res = "0";
        else
            res = res.substr(precedingZero);
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout<<obj.removeKdigits(S,K)<<endl;
    }
    return 0;
}
  // } Driver Code Ends