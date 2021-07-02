// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s)
    {
        // Your code here
        map<char, int> mp = {{'^', 20}, {'*', 19}, {'/', 19}, {'+', 18}, {'-', 18}, {'(', 0}};
        stack<char> st;
        string res = "";
        for(auto it : s)
        {
            if((it >= 97 && it <= 122) || (it >= 65 && it <= 90))
                res += it;
            else if(it == '(')
                st.push(it);
            else
            {
                if(it == ')')
                {
                    while(st.top() != '(')
                    {
                        res += st.top();
                        st.pop();
                    }
                    st.pop();
                }
                else if(st.empty() || mp[it] > mp[st.top()])
                    st.push(it);
                else
                {
                    while((!st.empty() && mp[it] <= mp[st.top()]))
                    {
                        res += st.top();
                        st.pop();
                    }
                    st.push(it);
                }
            }
        }
        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }
        return res;
    }
};


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        Solution ob;
        cout<<ob.infixToPostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends