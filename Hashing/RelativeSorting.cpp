#include<bits/stdc++.h>
using namespace std;

int main()
{
    // code
	int t;
	cin >> t;
	while(t--)
	{
	    int n, m;
	    cin >> n >> m;
	    int arr1[n], arr2[m];
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr1[i];
	    for(int i = 0 ; i < m ; i++)
	        cin >> arr2[i];
	    map<int, int> mp;
	    for(int i = 0 ; i < n ; i++)
	        mp[arr1[i]]++;
	    for(int i = 0 ; i < m ; i++)
	    {
	        if(mp[arr2[i]])
	        {
	            for(int j = 0 ; j < mp[arr2[i]] ; j++)
	                cout << arr2[i] << " ";
	            mp[arr2[i]] = 0;
	        }
	    }
	    for(auto it = mp.begin() ; it != mp.end() ; it++)
	    {
	        if(it->second)
	        {
	            for(int i = 0 ; i < it->second ; i++)
	            cout << it->first <<" ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}