#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	//code
	ll t;
	cin >> t;
	while(t--)
	{
	    ll n;
	    cin >> n;
	    ll a;
	    ll sum = 0;
	    ll sumsqr = 0;
	    for(ll i = 0 ; i < n ; i++)
	    {
	        cin >> a;
	        sum += a;
	        sumsqr += a*a;
	    }
	    ll sumdiff = (n*(n+1)/2) - sum;
	    ll sumsqrdiff = (n*(n+1)*(2*n+1)/6) - sumsqr;
	    ll rep = (sumsqrdiff/sumdiff - sumdiff)/2;
	    ll mis = (sumsqrdiff/sumdiff + sumdiff)/2;
	    cout << rep << " " << mis << endl;
	}
	return 0;
}