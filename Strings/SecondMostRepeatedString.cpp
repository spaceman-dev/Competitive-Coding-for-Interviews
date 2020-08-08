#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int comp(pair<string, int> &p1, pair<string, int> &p2)
{
    return p1.second > p2.second;
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
        string s[n];
        map <string, int> mp;
        for(int i = 0 ; i < n ; i++)
            cin >> s[i];
        for(int i = 0 ; i < n ; i++)
        {
            if(mp.find(s[i]) != mp.end())
            {
                auto it = mp.find(s[i]);
                it -> second++;
            }
            else
                mp.insert(pair<string, int>(s[i], 1));
        }
        vector<pair<string, int>> vec;
        for (auto it2 = mp.begin() ; it2 != mp.end() ; it2++)
            vec.push_back(make_pair(it2->first, it2->second));
        sort(vec.begin(), vec.end(), comp); 
        cout << (vec.begin() + 1)->first << endl;
    }
	return 0;
}