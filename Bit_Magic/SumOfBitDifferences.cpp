#include <bits/stdc++.h>
using namespace std;

int main()
{
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    int ans = 0;
	    for(int i = 0 ; i < 32 ; i++)
	    {
	        int count = 0;
	        for(int j = 0 ; j < n ; j++)
	        {
	            if(arr[j] & (1 << i))
	                count++;
	        }
	        ans += (count * (n - count) * 2);
	    }
	    cout << ans << "\n";
	}
	return 0;
}