#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(string ar[], int n) 
{ 
    if (n == 0) 
        return "-1"; 
    if (n == 1) 
        return ar[0]; 
    sort(ar, ar + n); 
    int en = min(ar[0].size(), ar[n - 1].size()); 
    string first = ar[0];
    string last = ar[n - 1]; 
    int i = 0; 
    while (i < en && first[i] == last[i]) 
        i++; 
    string pre = first.substr(0, i); 
    if(pre == "")
        pre = "-1";
    return pre; 
} 
int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string arr[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
        string s = longestCommonPrefix(arr, n);
	    cout << s << endl;
	}
	return 0;
}