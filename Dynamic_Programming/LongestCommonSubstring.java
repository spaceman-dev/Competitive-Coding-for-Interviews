package Dynamic_Programming;
import java.util.*;

class LongestCommonSubstring
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
            int max = 0;
            dp[0][0] = 0;
            for(int i = 1 ; i <= n ; i++)
            {
                for(int j = 1 ; j <= m ; j++)
                {
                    if(s1.charAt(i-1) == s2.charAt(j-1))
                    {
                        dp[i][j] = dp[i-1][j-1] + 1;
                        max = Math.max(max, dp[i][j]); 
                    }
                    else
                        dp[i][j] = 0;
                }
            }
            System.out.println(max);
        }
        sc.close();
    }
}