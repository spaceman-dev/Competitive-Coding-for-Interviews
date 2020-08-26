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
	    int hm[100001] = {0};
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> arr[i];
	        hm[arr[i]]++;
	    }
	    int count = 0;
	    int lcs = 0;
	    for(int i = 0 ; i < 100001 ; i++)
	    {
	        if(hm[i] > 0 && hm[i+1] > 0)
	        {
	            count++;
	            lcs = max(lcs, count);
	        }
	        else
	            count = 0;
	    }
	    cout << lcs+1 << endl;
	}
	return 0;
}