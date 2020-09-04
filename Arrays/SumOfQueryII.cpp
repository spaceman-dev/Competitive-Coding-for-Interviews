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
        int n, a;
        cin >> n;
        map<int,int> mp;
        int sum = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> a;
            sum += a;
            mp[i] = sum;
        }
        int q;
        cin >> q;
        while(q--)
        {
            int l, r;
            cin >> l >> r;
            if(r - l + 1 == n)
                cout << sum << " ";
            else if(l == 1)
                cout << mp[r] << " ";
            else
                cout << (mp[r] - mp[l-1]) << " ";
        }
        cout << "\n";
	}
	return 0;
}