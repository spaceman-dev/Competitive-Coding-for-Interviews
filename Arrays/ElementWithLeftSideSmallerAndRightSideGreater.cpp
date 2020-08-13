#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int min(int a, int b)
{
    return a < b ? a : b;
}
int max(int a, int b)
{
    return a > b ? a : b;
}
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
	    int min1[n];
	    int max1[n];
	    min1[n-1] = arr[n-1];
	    max1[0] = arr[0];
	    for(int i = n-2 ; i >= 0 ; i--)
	        min1[i] = min(min1[i+1], arr[i]);
	    for(int i = 1 ; i < n ; i++)
	        max1[i] = max(max1[i-1], arr[i]);
	    int ans = -1;
	    for(int i = 1 ; i < n-1 ; i++)
	    {
	        if(min1[i] == max1[i])
	        {
	            ans = min1[i];
	            break;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}