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
	    int arr[n];
	    unordered_map<int,int> mp;
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> arr[i];
	        mp[arr[i]]++;
	    }
	    int flag = 0;
	    for(int i = 0 ; i < n ; i++)
	    {
	        if(mp[arr[i]] > 1)
	        {
	            cout << (i+1) << endl;
	            flag = 1;
	            break;
	        }
	    }
	    if(!flag)
	        cout << "-1" << endl;
 	}
	return 0;
}