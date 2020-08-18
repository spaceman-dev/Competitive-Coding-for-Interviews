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
	    vector<int> v;
	    int i = 0;
	    int n1 = n;
	    while(n)
	    {
	        if(n > 9)
	        {
	            v.push_back(9);
	            n = n - 9;
	        }
	        else
	        {
	            v.push_back(n);
	            break;
	        }
	    }
	    for(int i = v.size()-1 ; i >= 0 ; i--)
	        cout << v[i] << "";
	    for(int j = 0 ; j < n1 ; j++)
	        cout << "0" << "";
	    cout << endl;
	    v.clear();
	}
	return 0;
}