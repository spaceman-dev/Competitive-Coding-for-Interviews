#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//code
	int t;
	cin >> t;
	long long fact[21];
	fact[0] = 1;
    for(int i = 1 ; i <= 20 ; i++)
        fact[i] = fact[i-1] * i;
	while(t--)
	{
	    int n, r, g, b;
	    cin >> n >> r >> g >> b;
	    long long ans = 0;
	    int total = n - (r+g+b);
	    for(int i = 0 ; i <= total ; i++)
	    {
	        for(int j = 0 ; j <= total ; j++)
	        {
	            int k = total - (i+j);
	            if(k >= 0)
	                ans += fact[n] / (fact[r+i] * fact[g+j] * fact[b+k]);
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}