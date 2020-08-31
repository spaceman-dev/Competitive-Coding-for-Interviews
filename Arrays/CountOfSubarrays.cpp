#include <bits/stdc++.h>
using namespace std;

int main()
{
	//code
	// Algorithm
    // 1.first find out count of all the sub-array
    // 2.then find count of all the sub-array (which have all elements less than or equal to k)
    // 3.print total- count
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	   int n, k;
	   cin >> n >> k;
	   int arr[n];
	   for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
	   int sum = 0;
	   int count = 0;
	   for(int i = 0 ; i < n ; i++)
	   {
	        if(arr[i] <= k)
	            count++;
	        else
	        {
	            sum += count * (count + 1) / 2;
	            count = 0;
	        }
	   }
	   sum += count * (count + 1) / 2;
	   cout << ((n * (n + 1) / 2) - sum) << "\n";
	}
	return 0;
}