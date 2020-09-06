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
	    int n, x;
	    cin >> n >> x;
	    unordered_map<int, int> mp;
	    int arr[n];
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> arr[i];
	        mp[arr[i]]++;
	    }
	    int flag = 0;
	    for(int i = 0 ; i < n ; i++)
	    {
	        if(mp[x-arr[i]])
	        {
	            if((mp[x-arr[i]] == 1 && x == 2*arr[i]))
	                continue;
	            else
	            {
	                flag = 1;
	                break;
	            }
	        }	        
	    }
	    if(flag)
	        cout << "Yes" << "\n";
	    else
	        cout << "No" << "\n";
	}
	return 0;
}