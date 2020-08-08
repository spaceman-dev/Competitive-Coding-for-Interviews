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
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    int i;
        deque<int> dq;
        for(i = 0 ; i < k ; i++)
        {
            while(!dq.empty() && arr[i] >= arr[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        cout << arr[dq.front()] << " ";
        while(i < n)
        {
            while(!dq.empty() && dq.front() <= i - k)
                dq.pop_front();
            while(!dq.empty() && arr[i] >= arr[dq.back()])
                dq.pop_back();
            dq.push_back(i);
            cout << arr[dq.front()] << " ";
            i++;
        }
        cout << endl;
	}
	return 0;
}