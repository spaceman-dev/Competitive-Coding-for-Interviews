#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <stdbool.h>
using namespace std;

int isPalin(string s)
{
    string s1;
    s1.assign(s.begin(), s.end());
    reverse(s1.begin(), s1.end());
    if(s1 == s)
        return 1;
    else
        return 0;
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
	    string s1;
	    int flag = 1;
	    for(int i = s.size() ; i >= 0 && flag; i--)
	    {
	        for(int j = 0 ; j < s.size() - i + 1 && flag; j++)
	        {
	            s1.assign(s.begin() + j, s.end() - s.size() + i + j);
	            if(isPalin(s1))
	            {
	                cout << s1 << endl;
	                flag = 0;
	            }
	            else
	                continue;
	        }
	    }
	}
	return 0;
}