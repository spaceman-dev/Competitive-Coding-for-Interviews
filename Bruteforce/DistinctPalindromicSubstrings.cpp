#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int isPalin(string s)
{
    int i = 0; 
    int j = s.length() - 1; 
    while (j > i) 
    { 
        if (s[i++] != s[j--]) 
            return 0; 
    } 
    return 1;
}
int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    map<string, int> mp;
	    for(int i = 1 ; i <= s.length() ; i++)
	    {
	        for(int j = 0 ; j < s.length() - i + 1 ; j++)
	        {
	            if(isPalin(s.substr(j, i)))
	                mp[s.substr(j, i)]++;
	        }
	    }
	    cout << mp.size() << endl;
	}
	return 0;
}