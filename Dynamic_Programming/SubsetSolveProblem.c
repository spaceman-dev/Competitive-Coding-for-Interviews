#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
bool findPartition(int[], int);
bool findPartition (int arr[], int n) 
{ 
    int sum = 0; 
    int i, j; 
    for (i = 0; i < n; i++)
        sum += arr[i]; 
    if (sum%2 != 0)   
        return false; 
    bool part[sum/2+1][n+1]; 
    for (i = 0; i <= n; i++) 
        part[0][i] = true;     
    for (i = 1; i <= sum/2; i++) 
        part[i][0] = false;         
    for (i = 1; i <= sum/2; i++)   
    { 
        for (j = 1; j <= n; j++)   
        { 
            part[i][j] = part[i][j-1]; 
            if (i >= arr[j-1]) 
                part[i][j] = part[i][j] || part[i - arr[j-1]][j-1]; 
        }         
    }         
    return part[sum/2][n]; 
}      
void main() 
{ 
    int t, n, i;
    int arr[n];
    scanf("%d", &t);
    for(int l = 0 ; l < t ; l++)
    {
        //printf("Enter the Size : \n");
        scanf("%d", &n);
        //printf("Enter the Elements : \n");
        for(i = 0 ; i < n ; i++)
            scanf("%d", &arr[i]);
        if (findPartition(arr, n) == true) 
            printf("YES\n"); 
        else
            printf("NO\n");
    } 
} 