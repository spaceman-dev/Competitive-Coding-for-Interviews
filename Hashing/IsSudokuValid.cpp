// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isValid(vector<vector<int>> mat)
    {
        // code here
        int row[9][9], col[9][9], slot[3][9][9];
        memset(row, 0, sizeof(row));
        memset(col, 0, sizeof(col));
        memset(slot, 0, sizeof(slot));
        for(int i = 0 ; i < 9 ; i++)
        {
            for(int j = 0 ; j < 9 ; j++)
            {
                if(mat[i][j] > 0 && mat[i][j] <= 9)
                {
                    int num = mat[i][j] - 1;
                    if(row[i][num])
                        return 0;
                    row[i][num] = 1;
                    if(col[j][num])
                        return 0;
                    col[j][num] = 1;
                    if(slot[i/3][j/3][num])
                        return 0;
                    slot[i/3][j/3][num] = 1;
                }
            }
        }
        return 1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends