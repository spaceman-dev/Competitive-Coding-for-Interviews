// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        string res = "";
        int i = 0;
        while(i < s.length())
        {
            stack<char> st;
            while(s[i] != '.' && i < s.length())
                st.push(s[i++]);
            while(!st.empty())
            {
                res += st.top();
                st.pop();
            }
            while(s[i] == '.' && i < s.length())
            {
                res += '.';
                i++;
            }
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends