package Bruteforce;
import java.io.*;
import java.util.*;
import java.lang.*;
class CrosswordStringSearch
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number of Rows: ");
        int m = sc.nextInt();
        System.out.println("Enter Number of Columns: ");
        int n = sc.nextInt();
        char crossword[][] = new char[m][n];
        System.out.println("Enter the Elements in the Crossword: ");
        for(int i = 0 ; i < m ; i++)
            crossword[i] = sc.next().toCharArray();
        System.out.println("Enter the Word to be Searched: ");
        String s = sc.next();
        int l = s.length();
        String s1 = "";
        int count = 0;
        for(int i = 0 ; i < m ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(crossword[i][j] == s.charAt(0))
                {
                    //Row to Right
                    s1 = "";
                    for(int k = j ; k < j+l ; k++)
                    {
                        if(k >= n)
                            break;
                        s1 = s1 + "" + crossword[i][k];
                    }
                    if(s1.equalsIgnoreCase(s))
                        count++;
                    //Row to Left
                    s1 = "";
                    for(int k = j ; k > j-l ; k--)
                    {
                        if(k < 0)
                            break;
                        s1 = s1 + "" + crossword[i][k];
                    }
                    if(s1.equalsIgnoreCase(s))
                        count++;
                    //Column Below
                    s1 = "";
                    for(int k = i ; k < i+l ; k++)
                    {
                        if(k >= m)
                            break;
                        s1 = s1 + "" + crossword[k][j];
                    }
                    if(s1.equalsIgnoreCase(s))
                        count++;
                    //Column Above
                    s1 = "";
                    for(int k = i ; k > i-l ; k--)
                    {
                        if(k < 0)
                            break;
                        s1 = s1 + "" + crossword[k][j];
                    }
                    if(s1.equalsIgnoreCase(s))
                        count++;
                    //Diagonal left below
                    s1 = "";
                    for(int k = i, p = j ; k < i+l && p > j-l ; k++, p--)
                    {
                        if(k >= m || p < 0)
                            break;
                        s1 = s1 + "" + crossword[k][p];
                    }
                    if(s1.equalsIgnoreCase(s))
                        count++;
                    //Diagonal right above
                    s1 = "";
                    for(int k = i, p = j ; k > i-l && p < j+l ; k--, p++)
                    {
                        if(k < 0 || p >= m)
                            break;
                        s1 = s1 + "" + crossword[k][p];
                    }
                    if(s1.equalsIgnoreCase(s))
                        count++;
                    //Diagonal left above
                    s1 = "";
                    for(int k = i, p = j ; k > i-l && p > j-l ; k--, p--)
                    {
                        if(k < 0 || p < 0)
                            break;
                        s1 = s1 + "" + crossword[k][p];
                    }
                    if(s1.equalsIgnoreCase(s))
                        count++;
                    //Diagonal left above
                    s1 = "";
                    for(int k = i, p = j ; k < i+l && p < j+l ; k++, p++)
                    {
                        if(k >= m || p >= n)
                            break;
                        s1 = s1 + "" + crossword[k][p];
                    }
                    if(s1.equalsIgnoreCase(s))
                        count++;
                }
            }
        }
        System.out.println("Total Number of Occurrences of the word '" + s + "' in the crossword is: " + count);
    }
}