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
	    int lmin[n];
	    int rmax[n];
	    lmin[0] = arr[0];
	    for(int i = 1 ; i < n ; i++)
	        lmin[i] = min(arr[i], lmin[i-1]);
	    rmax[n-1] = arr[n-1];
	    for(int i = n-2 ; i >= 0 ; i--)
	        rmax[i] = max(arr[i], rmax[i+1]);
	    int i = 0, j = 0;
	    int maxji = INT_MIN;
	    while(i < n && j < n)
	    {
	        if(lmin[i] <= rmax[j])
	        {
	            maxji = max(maxji, j-i);
	            j++;
	        }
	        else
	            i++;
	    }
	    if(maxji == INT_MIN)
	        cout << "0" << endl;
	    else
	        cout << maxji << endl;
	}
	return 0;
}