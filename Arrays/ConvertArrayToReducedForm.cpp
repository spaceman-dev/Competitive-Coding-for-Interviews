#include <bits/stdc++.h>
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
	    int n;
	    cin >> n;
	    int arr[n];
	    int copy[n];
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> arr[i];
	        copy[i] = arr[i];
	    }
	    unordered_map<int, int> mp;
	    sort(copy, copy+n);
	    for(int i = 0 ; i < n ; i++)
	        mp[copy[i]] = i;
	    for(int i = 0 ; i < n ; i++)
	        cout << mp[arr[i]] << " ";
	    cout << "\n";
	}
	return 0;
}