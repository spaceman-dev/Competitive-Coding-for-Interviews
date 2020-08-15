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
	    ll arr[n], res[n];
	    for(ll i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    stack <ll> s;
	    for(ll i = n-1 ; i >= 0 ; i--)
	    {
	        while(!s.empty() && arr[i] >= s.top())
	            s.pop();
	        if(s.empty())
	            res[i] = -1;
	        else
	            res[i] = s.top();
	        s.push(arr[i]);
	    }
	    for(ll i = 0 ; i < n ; i++)
	        cout << res[i] << " ";
	    cout << endl;
	}
	return 0;
}