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
	    int max = INT_MIN;
	    vector<int> v;
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    for(int i = n-1 ; i >= 0 ; i--)
	    {
	        if(arr[i] >= max)
	        {
	            max = arr[i];
	            v.push_back(max);
	        }
	    }
	    for(auto it = v.rbegin() ; it != v.rend() ; it++)
	        cout << *it << " ";
	    cout << endl;
	}
	return 0;
}