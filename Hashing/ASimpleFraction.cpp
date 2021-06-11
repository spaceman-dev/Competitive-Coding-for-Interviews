// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	string fractionToDecimal(int numerator, int denominator)
	{
	    // Code here
	    string res = "";
	    int quotient = numerator/denominator;
	    int remainder = numerator % denominator;
	    res += to_string(quotient);
	    if(remainder)
	        res += ".";
	    unordered_map<int, int> mp;
	    while(remainder && mp.find(remainder) == mp.end())
	    {
	        mp[remainder] = res.length();
	        numerator = remainder * 10;
	        quotient = numerator/denominator;
	        res += to_string(quotient);
	        remainder = numerator%denominator;
	    }
	    if(remainder)
	        res = res.substr(0, mp[remainder]) + "(" + res.substr(mp[remainder], res.length() - mp[remainder] + 1) + ")";
        return res;	     
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int numerator, denominator;
		cin >> numerator >> denominator;
		Solution ob;
		string ans = ob.fractionToDecimal(numerator, denominator);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends