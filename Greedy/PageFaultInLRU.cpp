#include <iostream>
#include <queue> 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i = 0 ; i < n ; i++)
	        cin>>a[i];
	    int max;
	    cin>>max;
	    vector<int>v;
	    int already = 0;
	    int pagefault = 0;
	    vector<int>::iterator it;
	    for(int i = 0 ; i < n ; i++)
	    {
	        if(find(v.begin(), v.end(), a[i]) != v.end())
	        {
	            it = find(v.begin(), v.end(), a[i]);
	            v.erase(it);
	            v.push_back(a[i]);
	        }
	        else if(already < max)
	        {
	            v.push_back(a[i]);
	            already++;
	            pagefault++;
	        }
	        else
	        {
	            v.erase(v.begin());
	            v.push_back(a[i]);
	            pagefault++;
	        }
	    }
	    cout << pagefault << endl;
	}
	return 0;
}