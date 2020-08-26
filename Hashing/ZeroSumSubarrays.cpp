#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	    ll n;
	    cin >> n;
	    ll arr[n];
	    for(ll i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    map<ll, ll> mp;
	    ll sum = 0;
	    ll count = 0;
	    for(ll i = 0 ; i < n ; i++)
	    {
	        sum += arr[i];
	        if(!sum)
	            count++;
	        if(mp.find(sum) != mp.end())
	            count += mp[sum];
	        mp[sum]++;
	    }
	    cout << count << endl;
	}
	return 0;
}