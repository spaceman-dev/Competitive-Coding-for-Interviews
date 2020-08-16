#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int dfs(int mat[][20], int n, int vis[][20], int i, int j)
{
    if(i < 0 || j < 0 || i >= n || j >=n || vis[i][j] == 1 || mat[i][j] == 0)
        return 0;
    vis[i][j] = 1;
    if(mat[i][j] == 2)
        return 1;
    int up = dfs(mat, n, vis, i-1, j);
    int down = dfs(mat, n, vis, i+1, j);
    int left = dfs(mat, n, vis, i, j-1);
    int right = dfs(mat, n, vis, i, j+1);
    if(up || down || left || right)
        return 1;
}
int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int mat[n][20];
	    int vis[n][20];
	    int row, col;
	    for(int i = 0 ; i < n ; i++)
	    {
	        for(int j = 0 ; j < n ; j++)
	        {
	            cin >> mat[i][j];
	            vis[i][j] = 0;
	            if(mat[i][j] == 1)
	            {
	                row = i;
	                col = j;
	            }
	        }
	    }
	    cout << dfs(mat, n, vis, row, col) << endl;
	}
	return 0;
}