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
	    cout << "0" << " ";
	    queue<int> q;
	    for(int i = 1 ; i < 10 ; i++)
	        q.push(i);
	    while(!q.empty())
	    {
	        int num = q.front();
	        q.pop();
	        if(num > n)
	            continue;
	        cout << num << " ";
	        int rem = num % 10;
	        if(rem > 0)
	            q.push(num*10 + (rem-1));
	        if(rem < 9)
	            q.push(num*10 + (rem+1));
	    }
	    cout << endl;
	}
	return 0;
}