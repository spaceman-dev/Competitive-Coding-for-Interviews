#include <stdio.h>
int main()
{
    int t,n,i,j,arr[]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        while(n!=0)
        {
            i=9;
            while(arr[i]>n)
               i--;
            printf("%d ", arr[i]);
            n-=arr[i];
        }
        printf("\n");
    }
}