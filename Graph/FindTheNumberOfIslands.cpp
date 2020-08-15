// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findIslands(vector<int> A[], int N, int M);

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A[N];
        for (int i = 0; i < N; i++) {
            vector<int> temp(M);
            A[i] = temp;
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        cout << findIslands(A, N, M) << endl;
    }
    return 0;
}// } Driver Code Ends


/*you are required to complete this method*/

/*  Function to find number of islands in the given graph
*   A[]: input array
*   N, M: Row and column of given matrix
*/

void countIsles(vector<int> A[], int N, int M, int i, int j)
{
    if(i < 0 || i >= N || j < 0 || j >= M || A[i][j] != 1)
        return;
    A[i][j] = 0;
    countIsles(A, N, M, i - 1, j - 1); // top left
    countIsles(A, N, M, i - 1, j); // top middle
    countIsles(A, N, M, i - 1, j + 1); // top right
    countIsles(A, N, M, i, j - 1); // left
    countIsles(A, N, M, i, j + 1); // right
    countIsles(A, N, M, i + 1, j - 1); // bottom left
    countIsles(A, N, M, i + 1, j); // bottom middle
    countIsles(A, N, M, i + 1, j + 1); // bottom right
}

int findIslands(vector<int> A[], int N, int M)
{
    int count = 0;
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            if(A[i][j] == 1)
            {
                countIsles(A, N, M, i, j);
                count++;
            }
        }
    }
    return count;
}