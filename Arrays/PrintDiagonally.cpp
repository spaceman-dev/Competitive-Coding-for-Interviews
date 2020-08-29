#include <iostream>
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
        int mat[n][n];
        map<int, vector<int>> mp;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                cin >> mat[i][j];
                mp[i+j].push_back(mat[i][j]);
            }
        }
        for(auto i = mp.begin() ; i != mp.end() ; i++)
        {
            for(auto j = i->second.begin() ; j != i->second.end() ; j++)
                cout << *j << " ";
        }
        cout << "\n";
    }
	return 0;
}