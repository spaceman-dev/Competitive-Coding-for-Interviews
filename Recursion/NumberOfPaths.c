#include <stdio.h>
int path(int, int);
int path(int m,int n)
{
    return (m == 1 || n == 1) ? 1 : path(m-1,n) + path(m,n-1);
}
int main()
{
	int t, m, n;
	scanf("%d", &t);
	for(int i = 0 ; i < t ; i++)
	{
	    scanf("%d", &m);
	    scanf("%d", &n);
	    printf("%d \n", path(m, n));
	}
	return 0;
}