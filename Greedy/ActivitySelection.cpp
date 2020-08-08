#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

struct act
{
    int start;
    int end ; 
};
bool compare(act a1 , act a2)
{
    return a1.end < a2.end; 
}
int main()
 {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n;
	    cin >> n;
	    act arr[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i].start;
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i].end; 
	    sort(arr, arr+n, compare);
	    int j = 0;
	    int count = 1;
	    for(int i = 1 ; i < n ; i++)
	    {
	       if(arr[i].start >= arr[j].end)
	       {
	           count++;
	           j = i; 
	       }
	   }
	   cout << count << endl; 
	}
	return 0;
}