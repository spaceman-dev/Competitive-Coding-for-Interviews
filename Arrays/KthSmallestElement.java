package Arrays;
import java.util.*;

class KthSmallestElement
{
	public static void main (String[] args)
	{
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number of Test Cases: ");
	    int t = sc.nextInt();
	    for(int l = 0 ; l < t ; l++)
	    {
            System.out.println("Enter the Size of the Array: ");
	        int n = sc.nextInt();
            int arr[] = new int[n];
            System.out.println("Enter the " + n + " Elements in the Array: ");
	        for(int i = 0 ; i < n ; i++)
                arr[i] = sc.nextInt();
            System.out.println("Enter k: ");
	        int k = sc.nextInt();
	       Arrays.sort(arr);
	       System.out.println("The " + k + "th Smallest Element in the Array is: " + arr[k-1]);
        }
        sc.close();
	}
}