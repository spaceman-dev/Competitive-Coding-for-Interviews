/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Arrays;

class CountTheTriplets
{
    public static void main (String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Enter Number of Test Cases: ");
        int t = sc.nextInt();
        for(int l = 0 ; l < t ; l++)
        {
            //System.out.println("Enter the Number of Array Elements: ");
            int n = sc.nextInt();
            int arr[] = new int[n];
            //System.out.println("Enter the "+ n + " Array Elements: ");
            for(int i = 0 ; i < n ; i++)
                arr[i] = sc.nextInt();
            int count = 0;
            Arrays.sort(arr);
            for(int i = n-1 ; i >= 0 ; i--)
            {
                int j = 0;
                int k = i-1;
                while(j < k)
                {
                    if(arr[j] + arr[k] == arr[i])
                    {
                        count++;
                        j++;
                        k--;
                    }
                    else if(arr[j] + arr[k] < arr[i])
                        j++;
                    else if(arr[j] + arr[k] > arr[i])
                        k--;
                }
            }
            if(count == 0)
                System.out.println("-1");
            else
                System.out.println(count);
        }
	}
}