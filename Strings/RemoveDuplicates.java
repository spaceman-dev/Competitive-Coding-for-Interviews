package Strings;
/*package whatever //do not write package name here */

import java.util.*;
import java.io.*;
class RemoveDuplicates
{
	public static void main (String[] args) throws IOException 
	{
		Scanner sc = new Scanner(System.in);
	    InputStreamReader i1 = new InputStreamReader(System.in);
	    BufferedReader br = new BufferedReader(i1);
		int t = Integer.parseInt(br.readLine());
		for(int l = 0 ; l < t ; l++)
		{
		    String s = br.readLine();
		    int count[] = new int[256];
		    for(int i = 0 ; i < 256 ; i++)
		        count[i] = 0;
		    for(int i = 0 ; i < s.length(); i++)
		    {
		        if(count[(int)s.charAt(i)]++ == 0)
		            System.out.print(s.charAt(i));
		    }
		System.out.println();
        }
        sc.close();
	}
}