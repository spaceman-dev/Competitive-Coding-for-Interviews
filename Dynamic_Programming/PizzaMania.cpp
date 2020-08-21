#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minCost(int x, int s, int m, int l, int cs, int cm, int cl)
{
    if(x <= 0)
        return 0;
    int csm = cs + minCost(x-s, s, m, l, cs, cm, cl);
    int cmm = cm + minCost(x-m, s, m, l, cs, cm, cl);
    int clm = cl + minCost(x-l, s, m, l, cs, cm, cl);
    return(min(csm, min(cmm, clm)));
}
int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int x, s, m, l, cs, cm, cl;
	    cin >> x >> s >> m >> l >> cs >> cm >> cl;
	    cout << minCost(x, s, m, l, cs, cm, cl) << endl;
	}
	return 0;
}