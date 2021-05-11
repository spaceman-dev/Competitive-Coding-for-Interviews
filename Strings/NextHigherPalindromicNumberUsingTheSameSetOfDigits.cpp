// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    string nextPalin(string s)
    { 
        //complete the function here
        if(s.length() < 4)
            return "-1";
        string str;
        string s1 = s.substr(0, s.length() / 2);
        string s11 = s1;
        next_permutation(s1.begin(), s1.end());
        if(s1 <= s11)
            return "-1";
        str += s1;
        if(s.length() % 2)
            str += s[s.length() / 2];
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        str += s2;
        return str;
    }
};
// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution obj;
        cout << obj.nextPalin(s) << endl;
    }
return 0;
}
  // } Driver Code Ends