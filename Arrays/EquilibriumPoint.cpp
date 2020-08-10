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
	    int sum = 0;
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    int sum1 = 0;
	    int flag = 0;
        for(int i = 0 ; i < n ; i++)
        {
            sum -= arr[i];
            if(sum == sum1)
            {
            cout << (i+1) << endl;
            flag = 1;
            break;
            }
         sum1 += arr[i];
        }
	    if(!flag)
	        cout << "-1" << endl;
	}
	return 0;
}