package Dynamic_Programming;
import java.util.*;
class EditDistance
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Enter the Number of Test Cases: ");
        int t = sc.nextInt();
        for(int i = 0 ; i < t ; i++)
        {
            //System.out.println("Enter length of first string: ");
            int p = sc.nextInt();
            //System.out.println("Enter length of second string: ");
            int q = sc.nextInt();
            //System.out.println("Enter the first string: ");
            String s1 = sc.next();
            //System.out.println("Enter  the second string: ");
            String s2 = sc.next();
            System.out.println(editDistance(s1, s2, p, q));
            sc.close();
        }
    }
    public static int editDistance(String s1, String s2, int p, int q)
    {
        int min = 0;
        if(p == 0)
            return q;
        if(q == 0)
            return p;
        if(s1.charAt(p-1) == s2.charAt(q-1))
            editDistance(s1, s2, p-1, q-1);
        else
        {
            int insert = editDistance(s1, s2, p, q-1);
            int remove = editDistance(s1, s2, p-1, q);
            int replace = editDistance(s1, s2, p-1, q-1);
            min = Math.min(insert, Math.min(remove, replace));
        }
        return(min + 1);
    }
}