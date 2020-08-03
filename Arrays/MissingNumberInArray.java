/*package whatever //do not write package name here */
package Arrays;
import java.util.*;

class MissingNumberInArray 
{
    public static void main (String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Enter the Number of Test Cases: ");
        int t = sc.nextInt();
        for(int l = 0 ; l < t ; l++)
        {
            //System.out.println("Enter the Number of Array Elements: ");
            int n = sc.nextInt();
            int arr[] = new int[n];
            //System.out.println("Enter the "+ (n-1) + " Elements in the Array: ");
            int sum = 0;
            for(int i = 0 ; i < n-1 ; i++)
            {
                arr[i] = sc.nextInt();
                sum+= arr[i];
            }
            int totalsum = n * (n + 1) / 2;
            System.out.println(totalsum-sum);
        }
        sc.close();
	}
}