// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


/* This function is used to detect a cycle in undirected graph

*  g[]: array of vectors to represent graph
*  V: number of vertices
*/
int dfs(vector<int>g[], vector<int> &vis, int n, int m)
{
    vis[n] = 1;
    for(auto i : g[n])
    {
        if(!vis[i])
        {
            if(dfs(g, vis, i, n))
                return 1;
        }
        else if(i != m || i == n)
            return 1;
    }
    return 0;
}
bool isCyclic(vector<int> g[], int V)
{
   // Your code here
   vector<int> vis(V);
   for(int i = 0 ; i < V ; i++)
   {
        if(!vis[i] && dfs(g, vis, i, -1))
            return true;
   }
   return false;
}

// { Driver Code Starts.


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V)<<endl;

    }
}
  // } Driver Code Ends