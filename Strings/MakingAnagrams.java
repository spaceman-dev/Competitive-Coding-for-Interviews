package Strings;
import java.io.*;
import java.util.*;

public class MakingAnagrams
{
    // Complete the makeAnagram function below.
    static int makeAnagram(String s, String t)
    {
        int count = 0;
        for(int i = 0 ; i < s.length() ; i++)
        {
            for(int j = 0 ; j < t.length() ; j++)
            {
                if(s.charAt(i)==t.charAt(j))
                {
                    String p = String.valueOf(s.charAt(i));
                    s = s.replaceFirst(p, "0");
                    t = t.replaceFirst(p, "0");
                    break;
                }
            }
        }
        for(int i = 0 ; i < s.length() ; i++)
        {
            String p = String.valueOf(s.charAt(i));
            if(!p.equals("0"))
                count++;
        }
        for(int j = 0 ; j < t.length() ; j++)
        { 
            String p = String.valueOf(t.charAt(j));
            if(!p.equals("0"))
                count++;
        }
        return count;
    }
    static String RemoveCharAt(String s, int l)
    {
        return (s.substring(0, l) + "" + s.substring(l+1));
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        //BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String a = scanner.nextLine();

        String b = scanner.nextLine();

        int res = makeAnagram(a, b);
        System.out.println(res);

        //bufferedWriter.write(String.valueOf(res));
        //bufferedWriter.newLine();

        //bufferedWriter.close();

        scanner.close();
    }
}
