// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

int maxHeight(int height[],int width[],int length[],int n);

int main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	

 	int A[1000],B[1000],C[10001];
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		A[i]=a;
		B[i]=b;
		C[i]=c;
	}
	cout<<maxHeight(A,B,C,n)<<endl;
}
 
} // } Driver Code Ends


/*The function takes an array of heights, width and 
length as its 3 arguments where each index i value 
determines the height, width, length of the ith box. 
Here n is the total no of boxes.*/
struct Box
{
    int length;
    int width;
    int height;
};
bool comp(Box a, Box b)
{
    return (a.length * a.width) > (b.length * b.width);
}
int maxHeight(int height[],int width[],int length[],int n)
{
    //Your code here
    Box rot[3*n];
    int ind = -1;
    for(int i = 0 ; i < n ; i++)
    {
        ind++;
        rot[ind].length = max(length[i], width[i]);
        rot[ind].width = min(length[i], width[i]);
        rot[ind].height = height[i];
        ind++;
        rot[ind].length = max(width[i], height[i]);
        rot[ind].width = min(width[i], height[i]);
        rot[ind].height = length[i];
        ind++;
        rot[ind].length = max(height[i], length[i]);
        rot[ind].width = min(height[i], length[i]);
        rot[ind].height = width[i];
    }
    sort(rot, (rot + 3*n), comp);
    int val[3*n];
    for(int i = 0 ; i < 3*n ; i++)
        val[i] = rot[i].height;
    int max1 = val[0];
    for(int i = 0 ; i < 3*n ; i++)
    {
        for(int j = i-1 ; j >= 0 ; j--)
        {
            if(rot[i].length < rot[j].length && rot[i].width < rot[j].width)
                val[i] = max(val[i], val[j] + rot[i].height);
            max1 = max(max1, val[i]);
        }
    }
    return max1;
}