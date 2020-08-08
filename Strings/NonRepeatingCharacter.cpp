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
	    string s;
	    cin >> s;
	    int arr[26];
	    for(int i = 0 ; i < 26 ; i++)
	        arr[i] = 0;
	    for(int i = 0 ; i < n ; i++)
	        arr[(int)s[i] - 97]++;
	    int flag = 0;
	    for(int i = 0 ; i < n ; i++)
	    {
	        if(arr[(int)s[i] - 97] == 1)
	        {
	            cout << s[i] << endl;
	            flag = 1;
	            break;
	        }
	    }
	    if(!flag)
	        cout << "-1" << endl;
	}
	return 0;
}