/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class SubarrayWithGivenSum
{
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Number of Test Cases: ");
		int t = sc.nextInt();
		for(int k = 0 ; k < t ; k++)
		{
			int flag = 0;
			System.out.println("Enter number of Array Elements: ");
			int n = sc.nextInt();
			System.out.println("Enter Number to check Sum: ");
			int s = sc.nextInt();
			int arr[] = new int[n];
			System.out.println("Enter "+ n + " Elements of the Array: ");
			for(int i = 0 ; i < n ; i++)
				arr[i] = sc.nextInt();
			int sum = 0; 
			int j = 0;
			for(int i = 0 ; i < n ; i++)
			{
				if(sum + arr[i] <= s)
					sum+= arr[i];
				else
				{
					sum+= arr[i];
					while(sum > s)
					    sum-= arr[j++];
				}
				if(sum == s)
				{
					System.out.println((j+1) + " "+ (i+1));
					flag = 1;
					break;
				}			
			}
			if(flag == 0)
			    System.out.println("-1");			
		}
	}
}