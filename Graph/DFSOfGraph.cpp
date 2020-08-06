// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/* Function to do DFS of graph

g : adjacency list of graph
N : number of vertices

return a list containing the DFS traversal of the given graph
*/
vector <int> dfs(vector<int> g[], int N)
{

    // Your code here
    vector<int> a;
    vector<bool> b(N);
    stack<int> st;
    if(N)
        st.push(0);
    while(st.size())
    {
        int top = st.top();
        st.pop();
        if(b[top])
            continue;
        a.push_back(top);
        b[top] = 1;
        for(int i = g[top].size() - 1 ; i >= 0 ; i--)
        {
            if(!b[g[top][i]])
                st.push(g[top][i]);
        }
    }
    return a;
}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        int N, E;
        cin>>N>>E;
        
        vector<int> g[N];
        bool vis[N];
        
        memset(vis, false, sizeof(vis));
        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector <int> res = dfs(g, N);
        for (int i = 0; i < res.size (); i++)
            cout << res[i] << " ";
        cout<<endl;

    }
}  // } Driver Code Ends