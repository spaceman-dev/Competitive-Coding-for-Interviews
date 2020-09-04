#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while(t--)
	{
	    ll n;
	    cin >> n;
	    priority_queue<ll, vector<ll>, greater<ll>> pq;
	    for(ll i = 0 ; i < n ; i++)
	    {
	        int a;
	        cin >> a;
	        pq.push(a);
	    }
	    ll res = 0;
	    while(!pq.empty())
	    {
	        ll top1 = pq.top();
	        pq.pop();
	        ll top2 = pq.top();
	        pq.pop();
	        res += top1 + top2;
	        if(pq.empty())
	            break;
	        pq.push(top1 + top2);
	    }
	    cout << res << "\n";
	}
	return 0;
}