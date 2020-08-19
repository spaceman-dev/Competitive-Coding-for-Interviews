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
	    queue<int> q;
	    for(int i = 1 ; i <= n ; i++)
	        q.push(i);
	    for(int i = 1 ; i <= n ; i++)
	    {
	        for(int j = 1 ; j <= i ; j++)
	        {
	            int front = q.front();
	            q.push(front);
	            q.pop();
	        }
	        arr[q.front() - 1] = i;
	        q.pop();
	    }
	    for(int i = 0 ; i < n ; i++)
	        cout << arr[i] << " ";
	    cout << endl;
	}
	return 0;
}