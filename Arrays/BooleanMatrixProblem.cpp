#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int r, c;
	    cin >> r >> c;
	    int mat[r][c];
	    for(int i = 0 ; i < r ; i++)
	    {
	        for(int j = 0 ; j < c ; j++)
	        {
	            cin >> mat[i][j];
	            if(mat[i][j] == 1)
	            {
	                mat[i][0] = 1;
	                mat[0][j] = 1;
	            }
	        }
	    }
	    for(int i = 1 ; i < r ; i++)
	    {
	        for(int j = 1 ; j < c ; j++)
	        {
                if(mat[i][0] || mat[0][j])
                    mat[i][j] = 1;
	        }
	    }
	    if(mat[0][0] == 1)
	    {
	        for(int i = 0 ; i < r ; i++)
	            mat[i][0] = 1;
	        for(int i = 0 ; i < c ; i++)
	            mat[0][i] = 1;
	    }
	    for(int i = 0 ; i < r ; i++)
	    {
	        for(int j = 0 ; j < c ; j++)
	            cout << mat[i][j] << " ";
	        cout << endl;
	    }
	}
	return 0;
}