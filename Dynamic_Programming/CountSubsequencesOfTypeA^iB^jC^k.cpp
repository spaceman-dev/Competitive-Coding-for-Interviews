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
	    int a = 0, b = 0, c = 0;
	    for(int i = 0 ; i < s.length() ; i++)
	    {
	        if(s[i] == 'a')
	            a = 2*a + 1;
	        if(s[i] == 'b')
	            b = 2*b + a;
	        if(s[i] == 'c')
	            c = 2*c + b;
	    }
	    cout << c << endl;
	}
	return 0;
}