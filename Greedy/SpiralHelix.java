/*package whatever //do not write package name here */
package Greedy;
import java.util.*;

class SpiralHelix
{
    public static long fn(int a[],int b[],int n,int m)
    {
        long first=0,second=0,res=0;
        int i=0,j=0;
        while(i<n&& j<m)
        {
            if(a[i]<b[j])
                first+=a[i++];
            else if(a[i]>b[j])
                second+=b[j++];
            else
            {
                res+=Math.max(first,second)+a[i];
                first=0;
                second=0;
                int temp=a[i];
                ++i;
                temp=b[j];
                ++j;
                while(i<n && a[i]==temp)
                    res+=a[i++];
                while(j<m && b[j]==temp)
                    res+=b[j++];
            }
        }
        while(i<n)
            first+=a[i++];
        while(j<m)
            second+=b[j++];
        res+=Math.max(first,second);
        return res;
    }
    public static void main (String[] args)
    {
        Scanner ab=new Scanner(System.in);
        int t=ab.nextInt();
        while(t-->0)
        {
            int n=ab.nextInt();
            int m=ab.nextInt();
            int arr[]=new int[n];
            int arr2[]=new int[m];
            for(int i=0;i<n;++i)
                arr[i]=ab.nextInt();
            for(int i=0;i<m;++i)
                arr2[i]=ab.nextInt();
            System.out.println(fn(arr,arr2,n,m));
        }
        ab.close();
    }
}