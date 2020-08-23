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
	    string s, s1;
	    cin >> s >> s1;
        if(s1.size() > s.size() || (s1.size() == s.size() && s1 != s))
        {
            cout << "-1" << endl;
            continue;
        }
        unordered_map<char, int>mp;
        for(int i = 0 ; i < s1.length() ; i++)
            mp[s1[i]]++;
        int count = s1.length();
        int i, j, l, r;
        i = j = l = r =0;
        while(r < s.length())
        {
            if(mp[s[r]] > 0)
                count--;
            mp[s[r]]--;
            while(count == 0)
            {
                if(j == 0 || r-l < j-i)
                {
                    i = l;
                    j = r;
                }
                mp[s[l]]++;
                if(mp[s[l]] > 0)
                    count++;
                l++;
            }
            r++;
        }
        if(i == 0 && j == 0)
            cout << "-1";
        else
        {
            for( ; i <= j ; i++)
                cout << s[i];
        }
        cout << endl;
	}
	return 0;
}