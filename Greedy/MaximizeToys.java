package Greedy;
import java.io.*;
import java.util.*;
import java.lang.*;
class MaximizeToys
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Enter the Number of Test Cases: ");
        int t = sc.nextInt();
        for(int l = 0 ; l < t ; l++)
        {
            //System.out.println("Enter the Number of Toys: ");
            int n = sc.nextInt();
            int arr[] = new int[n];
            //System.out.println("Enter the Amount you have: ");
            int amt = sc.nextInt();
            //System.out.println("Enter the Costs of the " + n + " Toys: ");
            for(int i = 0 ; i < n ; i++)
                arr[i] = sc.nextInt();
            Arrays.sort(arr);
            int count = 0;
            for(int i = 0 ; i < n ; i++)
            {
                if(amt-arr[i] < 0)
                    break;
                else
                {
                    amt-= arr[i];
                    count++;
                }
            }
            System.out.println(count);
        }
    }
}