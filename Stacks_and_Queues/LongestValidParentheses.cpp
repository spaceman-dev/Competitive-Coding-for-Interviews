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
	    cin >> s;
	    stack <int> st;
	    st.push(-1);
	    int ans = INT_MIN;
	    for(int i = 0 ; i < s.length() ; i++)
	    {
	        if(s[i] == '(')
	            st.push(i);
	        else
	        {
	            st.pop();
	            if(st.empty())
	                st.push(i);
	            else
	                ans = max(ans, i - st.top());
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}