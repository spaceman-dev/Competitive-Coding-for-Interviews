#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    stack<char> st;
	    cin >> s;
	    int flag = 1;
	    int n = s.size();
        while(flag && s.size())
        {
            flag = 0;
            int i = 0;
            while(i < n)
            {
                if(st.empty() || s[i]!=st.top())
                    st.push(s[i]);
                else
                {
                    flag = 1;
                    while(!st.empty() && st.top()==s[i])
                        i++;
                    st.pop();
                    st.push(s[i]);
                }
            i++;
            }
            s = "";
            while(!st.empty())
            {
                s += st.top();
                st.pop();
            }
            reverse(s.begin(),s.end());
            n = s.size();
        }
        cout << s << endl;
	}
	return 0;
}