// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s)
        {
            // code here
            string s1 = "";
            bool flag = 0;
            int count = 0;
            for(int i = 0 ; i < s.length() ; i++)
            {
                if(s[i] >= 48 && s[i] <= 57)
                    s1 += s[i];
                else
                {
                    if(s1.length() == 0 || s1.length() > 3 || stoi(s1) < 0 || stoi(s1) > 255 || (s1[0] == '0' && s1.length() > 1))
                    {
                        flag = 1;
                        break;
                    }
                    s1 = "";
                    count++;
                }
            }
            if(s1.length() == 0 || s1.length() > 3 || stoi(s1) < 0 || stoi(s1) > 255 || (s1[0] == '0' && s1.length() > 1))
                flag = 1;
            if(!flag && count == 3)
                return 1;
            else
                return 0;
        }
};

// { Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}  // } Driver Code Ends