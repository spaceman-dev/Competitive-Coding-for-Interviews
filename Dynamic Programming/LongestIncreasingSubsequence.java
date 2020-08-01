import java.io.*;
import java.util.*;
import java.lang.*;
class LongestIncreasingSubsequence
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Enter the number of test cases: ");
        int t = sc.nextInt();
        for(int l = 0 ; l < t ; l++)
        {
            //System.out.println("Enter Size of Array: ");
            int n = sc.nextInt();
            int arr[] = new int[n];
            int dp[] = new int[n];
            //System.out.println("Enter the " + n + " elements into the array: ");
            for(int i = 0 ; i < n ; i++)
                arr[i] = sc.nextInt();
            for(int i = 0 ; i < n ; i++)
                dp[i] = 1;
            int max = 1;
            for(int i = 1 ; i < n ; i++)
            {
                for(int j = 0 ; j < i ; j++)
                {
                    if(arr[i] > arr[j])
                        dp[i] = Math.max(dp[j] + 1, dp[i]);
                }
            }
            for(int i = 0 ; i < n ; i++)
                max = Math.max(dp[i], max);
            System.out.println(max);
        }
    }
}