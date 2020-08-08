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
	    int n;
	    cin >> n;
	    if(n == 0)
	    {
	        cout << "1" << endl;
	        continue;
	    }
	    int a = 1;
	    int b = 1;
	    int c;
	    for(int i = 0 ; i < n  ; i++)
	    {
	        c = (a % 1000000007) + (b % 1000000007);
	        a = b;
	        b = c;
	    }
	    cout << (c % 1000000007) << endl;
	}
	return 0;
}