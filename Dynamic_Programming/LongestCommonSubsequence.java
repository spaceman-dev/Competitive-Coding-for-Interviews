package Dynamic_Programming;
import java.io.*;
import java.util.*;
import java.lang.*;
class LongestCommonSubsequence
{
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Enter the number of test cases: ");
        int t = sc.nextInt();
        for(int l = 0 ; l < t ; l++)
        {
            //System.out.println("Enter Length of 1st String: ");
            int n = sc.nextInt();
            //System.out.println("Enter Length of 2nd String: ");
            int m = sc.nextInt();
            int dp[][] = new int[n+1][m+1];
            //System.out.println("Enter the 1st String: ");
            String s1 = sc.next();
            //System.out.println("Enter the 2nd String: ");
            String s2 = sc.next();
            for(int i = 0 ; i <= n ; i++)
            {
                for(int j = 0 ; j <= m ; j++)
                {
                    if(i == 0 || j == 0)
                    {
                        dp[i][j] = 0;
                        continue;
                    }
                    if(s1.charAt(i-1) == s2.charAt(j-1))
                    {
                        dp[i][j] = dp[i-1][j-1] + 1;
                    }
                    else
                    {
                        dp[i][j] = Math.max(dp[i][j-1], dp[i-1][j]);
                    }
                }
            }
            int result = dp[n][m];
            System.out.println(result);
        }
    }
}