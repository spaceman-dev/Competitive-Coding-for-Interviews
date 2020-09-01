#include <bits/stdc++.h>
using namespace std;

int modularExponentation(int a, int b, int c)
{
    if(a == 1 || b == 0)
        return 1;
    return ((a * modularExponentation(a, b-1, c)) % c);
}
int main()
{
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	    int a, b, c;
	    cin >> a >> b >> c;
	    cout << modularExponentation(a, b, c) << "\n";
	}
	return 0;
}