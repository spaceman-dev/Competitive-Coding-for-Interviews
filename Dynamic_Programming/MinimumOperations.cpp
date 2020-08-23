#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minop(int n)
{
    if(n > 2)
    {
        if(n%2 == 0)
            return (1+minop(n/2));
        else
            return (1+minop(n-1));
    }
    else if(n == 1 || n == 2)
        return (1+minop(n-1));
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
	    int n;
	    cin >> n;
	    cout << minop(n) << endl;
	}
	return 0;
}