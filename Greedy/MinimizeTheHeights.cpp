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
	    int k;
	    cin >> k;
	    int n;
	    cin >> n;
	    int arr[n];
	    int min1 = INT_MAX;
	    int max1 = INT_MIN;
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> arr[i];
	        min1 = min(min1, arr[i]);
	        max1 = max(max1, arr[i]);
	    }
	    int mid = (min1 + max1) / 2;
	    for(int i = 0 ; i < n ; i++)
	        arr[i] = arr[i] <= mid ? (arr[i] + k) : (arr[i] - k);
	    sort(arr, arr + n);
	    int min2 = arr[0];
	    int max2 = arr[n-1];
	    cout << min((max1 - min1), (max2 - min2)) << endl;
	}
	return 0;
}