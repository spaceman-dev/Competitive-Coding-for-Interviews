/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class NumberOfPairs
{
    public static void main (String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Enter the Number of Test Cases: ");
        int t = sc.nextInt();
        for(int l = 0 ; l < t ; l++)
        {
            //System.out.println("Enter the Number of Array Elements for 1st Array: ");
            int n1 = sc.nextInt();
            int x[] = new int[n1];
            //System.out.println("Enter the Number of Array Elements for 2nd Array: ");
            int n2 = sc.nextInt();
            int y[] = new int[n2];
            //System.out.println("Enter the "+ n1 + " Elements in the 1st Array: ");
            for(int i = 0 ; i < n1 ; i++)
                x[i] = sc.nextInt();
            //System.out.println("Enter the "+ n2 + " Elements in the 2nd Array: ");
            for(int i = 0 ; i < n2 ; i++)
                y[i] = sc.nextInt();
            int count = 0;
            for(int i = 0 ; i < n1 ; i++)
            {
                for(int j = 0 ; j < n2 ; j++)
                {
                    if(Math.pow(x[i], y[j]) > Math.pow(y[j], x[i]))
                        count++;
                }
            }
            System.out.println(count);
        }
	}
}