// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
  

 // } Driver Code Ends
//User function Template for C

long long int floorSqrt(long long int x) 
{
    // Your code goes here
        long long int res = 1, low = 1, high = x;
        while(low <= high)
        {
            long long int mid = (low + high)/2;
            if(mid * mid <= x)
            {
                low = mid + 1;
                res = mid;
            }
            if(mid * mid >= x)
                high = mid - 1;
        }
        return res;
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends