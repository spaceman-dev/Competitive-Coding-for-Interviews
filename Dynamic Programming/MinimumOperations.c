#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int minop(int, int);
int minop(int n, int count)
{
    if(n > 2)
    {
        if(n%2 == 0)
            minop(n/2, count+1);
        else if(n%2 == 1)
            minop(n-1, count+1);
    }
    else if(n == 2)
        minop(n-1, count+1);
    else if(n == 1)
        minop(n-1, count+1);
    else if(n == 0)
    {
        printf("%d\n", count);
        return 0;
    }
}
int main()
{
    int t;
    int n;
    int count;
    scanf("%d", &t);
    for(int i = 0 ; i < t ; i++)
    {
        count = 0;
        scanf("%d", &n);
        minop(n, count);
    }
	return 0;
}