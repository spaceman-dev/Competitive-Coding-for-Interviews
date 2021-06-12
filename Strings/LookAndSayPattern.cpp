// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    string lookandsay(int n)
    {
        // code here
        string s = "1";
        for(int i = 1 ; i < n ; i++)
        {
            string s1 = "";
            int count = 1;
            s += 'a';
            for(int j = 0 ; j < s.length() - 1 ; j++)
            {
                if(s[j] == s[j+1])
                    count++;
                else
                {
                    s1 += to_string(count) + s[j];
                    count = 1;
                }
            }
            s = s1;
        }
        return s;
    }   
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}  // } Driver Code Ends