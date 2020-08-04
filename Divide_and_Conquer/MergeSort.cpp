// { Driver Code Starts
// C program for implementation of Merge Sort
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r);

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}// } Driver Code Ends

/* The task is to complete merge() which is used
   in below mergeSort() */
/*   l is for left index and r is right index of the
   sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r) {
    if (l < r)   {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
} */

// Merges two subarrays of arr[].  First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
     // Your code here
    int n1 = m-l+1;
    int n2 = r-m;
    int t1[n1], t2[n2];
    int i = 0, j = 0, k = l;
    for(int p = l; p<=m; p++)
    {
        t1[i] = arr[p];
        i++;
    }
    for(int q = m+1; q<=r; q++)
    {
        t2[j] = arr[q];
        j++;
    }
    i = j = 0;
    while(i<n1 && j<n2)
    {
        if(t1[i]>t2[j])
        {
            arr[k] = t2[j];
            j++;
            k++;
        }
        else
        {
            arr[k] = t1[i];
            i++;
            k++;
        }
    }
    while(i<n1)
    {
        arr[k] = t1[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k] = t2[j];
        k++;
        j++;
    }
}