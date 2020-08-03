package Greedy;

/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class ActivitySelection
{
    public static void main (String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Enter Number of test cases: ");
        int t = sc.nextInt();
        for(int l = 0 ; l < t ; l++)
        {
            //System.out.println("Enter the Number of Activities: ");
            int n = sc.nextInt();
            int start[] = new int[n];
            int end[] = new int[n];
            //System.out.println("Enter the Start Time of the "+ n + " activities: ");
            for(int i = 0 ; i < n ; i++)
                start[i] = sc.nextInt();
            //System.out.println("Enter the End Times of the " + n + " activities: ");
            for(int i = 0 ; i < n ; i++)
                end[i] = sc.nextInt();
            Arrays.sort(start);
            Arrays.sort(end);
            int in = 1;
            int max = 1;
            int time = start[0];
            int i = 1;
            int j = 0;
            while(i < n && j < n)
            {
                if(start[i] <= end[i])
                {
                    in++;
                    if(in > max)
                    {
                        max = in;
                        time = start[i];
                    }
                    i++;
                }
                else
                {
                    in--;
                    j++;
                }
            }
            System.out.println(max);
        }
	}
}