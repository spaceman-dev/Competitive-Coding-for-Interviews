package Dynamic_Programming;
import java.util.*;

class MaximizeTheCutSegments
{
    public static int solve(int dp[], int n, int x, int y, int z)
    {
    if(n == 0)
        return 0;
    if(n < 0)
        return -4000;
    if(dp[n] != -1)
        return dp[n];
    return dp[n] = 1 + Math.max(solve(dp, n - x, x, y, z), Math.max(solve(dp, n - y, x, y, z), solve(dp, n - z, x, y, z)));
    }
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number of Test Cases: ");
        int t = sc.nextInt();
        for(int l = 0 ; l < t ; l++)
        {
            System.out.println("Enter the Total Length of the Line Segment: ");
            int n = sc.nextInt();
            System.out.println("Enter the Cuts: ");
            System.out.println("Enter x: ");
            int x = sc.nextInt();
            System.out.println("Enter y: ");
            int y = sc.nextInt();
            System.out.println("Enter z: ");
            int z = sc.nextInt();
            int dp[] = new int[n+1];
            Arrays.fill(dp,-1);
            System.out.println(solve(dp, n, x, y, z));
        }
        sc.close();
    }
}