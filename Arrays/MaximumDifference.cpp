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
	    int max_dif = INT_MIN;
	    int min = arr[0];
	    for(int i = 1 ; i < n ; i++)
	    {
	        max_dif = max_dif < (arr[i] - min) ? (arr[i] - min) : max_dif;
	        min = min > arr[i] ? arr[i] : min;
	    }
	    cout << max_dif << endl;
	}
	return 0;
}