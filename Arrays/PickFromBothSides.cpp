int Solution::solve(vector<int> &A, int B)
{
    int n = A.size();
    int res = 0;
    for(int i = 0 ; i < B ; i++)
        res += A[i];
    int sum = res;
    for(int i = 0 ; i < B ; i++)
    {
        sum -= A[B - 1 - i];
        sum += A[n - 1 - i];
        res = max(res, sum);
    }
    return res;
}