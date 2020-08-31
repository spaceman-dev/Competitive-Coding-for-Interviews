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
	    for(int i = 0 ; i < n ; i++)
	    {
	        for(int j = 0 ; j < n ; j++)
	            cin >> mat[i][j];
	    }
	    for(int i = 0 ; i < n ; i++)
	    {
	        for(int j = i ; j < n ; j++)
	        {
	            int temp = mat[i][j];
	            mat[i][j] = mat[j][i];
	            mat[j][i] = temp;
	        }
	    }
	    for(int i = 0 ; i < n ; i++)
	    {
	        int front = 0, back = n-1;
	        while(front <= back)
	        {
	            int temp = mat[i][front];
	            mat[i][front] = mat[i][back];
	            mat[i][back] = temp;
	            front++;
	            back--;
	        }
	    }
	    for(int i = 0 ; i < n ; i++)
	    {
	        for(int j = 0 ; j < n ; j++)
	            cout << mat[i][j] << " ";
	    }
        cout << "\n";
	}
	return 0;
}