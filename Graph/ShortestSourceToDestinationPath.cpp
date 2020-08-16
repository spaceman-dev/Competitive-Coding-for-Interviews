#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &mat, int n, int m, int x, int y, int i, int j, int &count, int &mincount)
{
    if(i < 0 || j < 0 || i >= n || j >= m || mat[i][j] == 0)
        return;
    if(i == x && j == y)
    {
        mincount = mincount > count ? count : mincount;
        return;
    }
    count++;
    mat[i][j] = 0;
    dfs(mat, n, m, x, y, i+1, j, count, mincount); // UP
    dfs(mat, n, m, x, y, i-1, j, count, mincount); // DOWN
    dfs(mat, n, m, x, y, i, j-1, count, mincount); // LEFT
    dfs(mat, n, m, x, y, i, j+1, count, mincount); // RIGHT
    count--;
    mat[i][j] = 1;
}
int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n, m;
	    cin >> n >> m;
	    vector<vector<int>> mat(n, vector<int>(m));
	    for(int i = 0 ; i < n ; i++)
	    {
	        for(int j = 0 ; j < m ; j++)
	            cin >> mat[i][j];
	    }
	    int x, y;
	    cin >> x >> y;
	    int mincount = INT_MAX;
	    int count = 0;
	    dfs(mat, n, m, x, y, 0, 0, count, mincount);
	    if(mincount == INT_MAX)
	        cout << "-1" << endl;
	    else
	        cout << mincount << endl;
	}
	return 0;
}