#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void countNearby1s(int mat[][51], int n, int m, int i, int j, int &count)
{
    if(i < 0 || i >= n || j < 0 || j >= m || mat[i][j] != 1)
        return;
    count++;
    mat[i][j] = 0;
    countNearby1s(mat, n, m, i - 1, j - 1, count); // top left
    countNearby1s(mat, n, m, i - 1, j, count); // top middle
    countNearby1s(mat, n, m, i - 1, j + 1, count); // top right
    countNearby1s(mat, n, m, i, j - 1, count); // left
    countNearby1s(mat, n, m, i, j + 1, count); // right
    countNearby1s(mat, n, m, i + 1, j - 1, count); // bottom left
    countNearby1s(mat, n, m, i + 1, j, count); // bottom middle
    countNearby1s(mat, n, m, i + 1, j + 1, count); // bottom right
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
	    int mat[n][51];
	    for(int i = 0 ; i < n ; i++)
	    {
	        for(int j = 0 ; j < m ; j++)
	            cin >> mat[i][j];
	    }
	    int max = INT_MIN;
	    for(int i = 0 ; i < n ; i++)
	    {
	        for(int j = 0 ; j < m ; j++)
	        {
	            if(mat[i][j])
	            {
	                int count = 0;
	                countNearby1s(mat, n, m, i, j, count);
	                max = max < count ? count : max;
	            }
	        }
	    }
	    cout << max << endl;
	}
	return 0;
}