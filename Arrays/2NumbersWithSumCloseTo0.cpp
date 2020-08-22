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
	    ll arr[n];
	    for(ll i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    sort(arr, arr+n);
	    ll l = 0;
	    ll r = n-1;
	    ll minsum = INT_MAX;
	    while(l < r)
	    {
	        ll sum = arr[l] + arr[r];
	        if(abs(sum) < abs(minsum))
	            minsum = sum;
	        if(sum < 0)
	            l++;
	        else
	            r--;
	    }
	    cout << minsum << endl;
	}
	return 0;
}