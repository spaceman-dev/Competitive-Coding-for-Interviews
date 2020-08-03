package Greedy;
import java.io.*;
import java.util.*;
import java.lang.*;
class LargestNumberPossible
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Enter the Number of test cases: ");
        int t = sc.nextInt();
        for(int l = 0 ; l < t ; l++)
        {
            //System.out.println("Enter the Number of digits: ");
            int n = sc.nextInt();
            //System.out.println("Enter the Sum of digits: ");
            int s = sc.nextInt();
            if((s > n * 9) || (s == 0 && n > 1))
            {
                System.out.println("-1");
                continue;
            }
            for( ; n > 0 ; n--)
            {
                if(s >= 9)
                {
                    System.out.print("9");
                    s-= 9;
                }
                else if(s == 0)
                    System.out.print("0");
                else
                {
                    System.out.print(s);
                    s = 0;
                }
            }
            System.out.println();
        }
    }
}