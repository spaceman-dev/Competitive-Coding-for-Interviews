// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution
{
public:		
	int lps(string s)
	{
	    // Your code goes here
	    int lps[s.length()];
	    lps[0] = 0;
	    int i = 0, j = 1;
	    while(j < s.length())
	    {
	        if(s[i] == s[j])
	        {
	            lps[j] = i+1;
	            i++, j++;
	        }
	        else
	        {
	            if(i)
	                i = lps[i-1];
	            else
	                lps[j] = 0, j++;
	        }
	    }
	    return lps[s.length() - 1];
	}
};

// { Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends