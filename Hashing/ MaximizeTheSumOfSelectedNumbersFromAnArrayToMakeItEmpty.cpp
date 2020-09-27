#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() 
{
	//code
	fastio;
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    unordered_map<int, int> mp;
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> arr[i];
	        mp[arr[i]]++;
	    }
	    sort(arr, arr+n);
	    int sum = 0;
	    for(int i = n-1 ; i >= 0 ; i--)
	    {
	        if(mp[arr[i]] > 0)
	        {
	            sum += arr[i];
	            mp[arr[i]]--;
	            mp[arr[i]-1]--;
	        }
	    }
	    cout << sum << "\n";
	}
	return 0;
}