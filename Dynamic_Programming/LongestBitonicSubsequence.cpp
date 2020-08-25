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
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    int dpleft[n];
	    int dpright[n];
	    fill(dpleft, dpleft+n, 1);
	    fill(dpright, dpright+n, 1);
	    for(int i = 1 ; i < n ; i++)
	    {
	        for(int j = 0 ; j < i ; j++)
	        {
	            if(arr[i] > arr[j])
	                dpleft[i] = max(dpleft[i], dpleft[j]+1);
	        }
	    }
	    for(int i = n-2 ; i >= 0 ; i--)
	    {
	        for(int j = n-1 ; j > i ; j--)
	        {
	            if(arr[i] > arr[j])
	                dpright[i] = max(dpright[i], dpright[j]+1);
	        }
	    }
	    int res = 1;
	    for(int i = 0 ; i < n ; i++)
	        res = max(res, (dpleft[i] + dpright[i] - 1));
	    cout << res << endl;
	}
	return 0;
}