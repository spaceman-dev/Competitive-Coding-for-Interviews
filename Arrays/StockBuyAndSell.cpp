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
	    int i = 0;
	    int buy = 0;
	    int sell = 0;;
	    while(i < n-1)
	    {
	        while(i < n-1 && arr[i] > arr[i+1])
	            i++;
	        if(i == n-1)
	            break;
	        buy = i++;
	        while(i < n && arr[i-1] < arr[i])
	            i++;
	        sell = i-1;
	        cout << "(" << buy << " " << sell << ")" << " ";
	    }
	    if(buy == 0 && sell == 0)
	        cout << "No Profit";
	    cout << endl;
	}
	return 0;
}