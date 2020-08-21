#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// code
	// Just count the even places where the bit is set and odd places where the bit is set
    // if abs(odd-even)%3==0 then the number is divisible
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    int even = 0;
	    int odd = 0;
	    int alt = -1;
	    for(int i = s.length()-1 ; i >= 0 ; i--)
	    {
	        if(alt == -1)
	        {
	            if(s[i] == '1')
	                odd++;
	        }
	        else
	        {
	            if(s[i] == '1')
	                even++;
	        }
	        alt *= -1;
	    }
	    if(abs(even - odd) % 3 == 0)
	        cout << "1" << endl;
	    else
	        cout << "0" << endl;
	}
	return 0;
}