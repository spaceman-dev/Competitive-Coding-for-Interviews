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
	    string s;
	    cin >> s;
	    int res = 0;
	    int count = 0;
	    for(char i : s)
	    {
	        if(i == '0')
	            count++;
	        else
	            count--;
            if(count < 0 && i == '1')
                count = 0;
            res = max(count, res);
	    }
	    if(res == 0)
	        cout << "-1" << "\n";
	    else
	        cout << res << "\n";
	}
	return 0;
}