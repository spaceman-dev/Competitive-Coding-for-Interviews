#include <bits/stdc++.h>
using namespace std;

int main()
{
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    vector<string> v;
	    string temp = "";
	    for(int i = 0 ; i <= s.length() ; i++)
	    {
	        if(s[i] == '.' || i == s.length())
	        {
	            v.push_back(temp);
	            temp = "";
	        }
	        else
	            temp += s[i];
	    }
	    int i = 0, j = v.size()-1;
        s = "";
	    for(int i = v.size()-1 ; i > 0 ; i--)
	        s += v[i] + ".";
	    s += v[0];
	    cout << s << "\n";
	}
	return 0;
}