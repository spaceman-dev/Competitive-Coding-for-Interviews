#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Job
{
    int id;
    int deadline;
    int profit;
};
int comp(Job j1, Job j2)
{
    if(j1.profit  == j2.profit)
        return (j1.id < j2.id);
    else
        return (j1.profit > j2.profit);
}
int main()
{
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    Job arr[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i].id >> arr[i].deadline >> arr[i].profit;
	   sort(arr, arr+n, comp);
	   int count = 0;
	   int profit = 0;
	   int vis[n];
	   memset(vis, 0, sizeof(vis));
	   for(int i = 0 ; i < n ; i++)
	   {
	       for(int j = min(n-1, arr[i].deadline-1) ; j >= 0 ; j--)
	       {
	           if(!vis[j])
	           {
	               vis[j] = 1;
	               count++;
	               profit += arr[i].profit;
	               break;
	           }
	       }
	   }
	   cout << count << " " << profit << "\n";
	}
	return 0;
}