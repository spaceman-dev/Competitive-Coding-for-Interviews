#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countSetBits(int x) 
{ 
    int count = 0; 
    while(x)
    { 
        x &= (x - 1); 
        count++; 
    } 
    return count; 
}
int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int flag = 0;
	    for(int i = 0 ; i < n ; i++)
	    {
	        if(i + countSetBits(i) == n)
	       {
	           flag = 1;
	           break;
	       }
	    }
	    if(!flag)
	        cout << "1" << endl;
	    else
	        cout << "0" << endl;
	}
	return 0;
}