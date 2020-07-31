/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class KadanesAlgorithm 
{
    public static void main (String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Enter the Number of Test Cases: ");
        int t = sc.nextInt();
        for(int l = 0 ; l < t ; l++)
        {
            //System.out.println("Enter the Number of Array Elements: ");
            int n = sc.nextInt();
            int arr[] = new int[n];
            //System.out.println("Enter the "+ n + " Elements in the Array: ");
            for(int i = 0 ; i < n ; i++)
                arr[i] = sc.nextInt();
            int max = arr[0];
            int current_sum = arr[0];
            for(int i = 1; i < n; i++)
            {
                current_sum = Math.max(arr[i], current_sum + arr[i]);
                max = Math.max(max, current_sum);
            }
            System.out.println(max);
        }
	}
}