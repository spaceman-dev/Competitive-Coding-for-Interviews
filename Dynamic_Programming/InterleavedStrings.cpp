// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool isInterleave(string A, string B, string C);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		cout<<isInterleave(a,b,c)<<endl;
	}
	// your code goes here
	return 0;
}// } Driver Code Ends


/*You are required to complete this method */
bool isInterleave(string A, string B, string C) 
{
    //Your code here
    if(!A.length() && !B.length() && !C.length())
        return true;
    if(!C.length())
        return false;
    bool ac = A.length() && (C[0] == A[0]) && (isInterleave(A.substr(1), B, C.substr(1)));
    bool bc = B.length() && (C[0] == B[0]) && (isInterleave(A, B.substr(1), C.substr(1)));
    return (ac || bc);
}