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
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    sort(arr, arr + n);
	    int x = (n + k) / (k + 1);
	    int minamt = 0;
	    for(int i = 0 ; i < x ; i++)
	        minamt += arr[i];
	    int maxamt = 0;
	    for(int i = n - 1 ; i >= n - x ; i--)
	        maxamt += arr[i];
	    cout << minamt << " " << maxamt << endl;
	}
	return 0;
}