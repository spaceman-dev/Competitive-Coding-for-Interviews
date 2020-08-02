#include <stdio.h>
int hop(int);
int hop(int n)
{
    if(n == 0)
        return 1;
    else if(n == 1)
        return 1;
    else if(n == 2)
        return (hop(n-1)+hop(n-2));
    else
        return(hop(n-1)+hop(n-2)+hop(n-3));
}
int main()
{
    int t, i, n;
    scanf("%d", &t);
    for(int i = 0 ; i < t ; i++)
    {
        scanf("%d", &n);
        printf("%d\n", hop(n));
    }
    return 0;
}