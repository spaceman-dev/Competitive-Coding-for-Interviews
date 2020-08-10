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
	    int a[n];
	    int b[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> a[i];
	    for(int i = 0 ; i < n ; i++)
	        cin >> b[i];
	    sort(a, a + n);
	    sort(b, b + n, greater<int>());
	    long long mult = 0;
	    for(int i = 0 ; i < n ; i++)
	        mult += a[i]*b[i];
	    cout << mult << endl;
	}
	return 0;
}