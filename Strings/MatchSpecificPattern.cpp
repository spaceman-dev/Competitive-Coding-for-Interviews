// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict,string pattern);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		    cin>>s[i];
		
		string tt;
		cin>>tt;
		
		vector<string> res = findMatchedWords(s,tt);
        sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		    cout<<res[i]<<" ";
		cout<<endl;
		
	}
}// } Driver Code Ends


/* The function returns a  vector of strings 
present in the dictionary which matches
the string pattern.
You are required to complete this method */
vector<string> findMatchedWords(vector<string> dict,string pattern)
{
    //Your code here
    vector<string> sol;
    if(dict.size() == 0 || pattern == "")
        return sol;
    for(int i = 0 ; i < dict.size() ; i++)
    {
        if(dict[i].size() == pattern.size())
        {
            map<char, char> mp;
            int flag = 0;
            for(int j = 0 ; j < pattern.size() ; j++)
            {
                if(mp.find(pattern[j]) != mp.end())
                {
                    if(mp[pattern[j]] != dict[i][j])
                    {
                        flag++;
                        break;
                    }
                }
                else
                    mp[pattern[j]] = dict[i][j];
            }
            if(!flag)
                sol.push_back(dict[i]);
        }
    }
    return sol;
}