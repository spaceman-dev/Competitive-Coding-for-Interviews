#include <iostream>
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
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    sort(arr, arr+n);
	    int mincoin = INT_MAX;
	    int a = 0;
	    int temp = 0;
	    for(int i = 0 ; i < n ; i++)
	    {
	        int temp = a;
	        a += arr[i];
	        for(int j = n-1 ; j >= 0 ; j--)
	        {
	            if(arr[j] - arr[i] - k > 0)
	                temp += arr[j] - arr[i] - k;
	        }
	        mincoin = min(mincoin, temp);
	    }
	    cout << mincoin << "\n";
	}
	return 0;
}