package Strings;
import java.util.*;

class CountOccurrencesOfAnagrams
{
    public static boolean isAnagram(String s, String word)
    {
        char s1[] = s.toCharArray();
        char s2[] = word.toCharArray();
        Arrays.sort(s1);
        Arrays.sort(s2);
        if(Arrays.equals(s1, s2))
            return true;
        return false;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Text: ");
        String text = sc.next();
        System.out.println("Enter the Word: ");
        String word = sc.next();
        int count = 0;
        for(int i = 0 ; i <= text.length() - word.length() ; i++)
        {
            if(isAnagram(text.substring(i, i + word.length()), word))
                count++;
        }
        System.out.println(count); 
        sc.close();
    }
}