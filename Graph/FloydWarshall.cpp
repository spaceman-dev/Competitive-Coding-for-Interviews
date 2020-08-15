#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void FloydWarshall(int graph[][100], int V)
{
    int dist[V][V];
    for(int i = 0 ; i < V ; i++)
    {
        for(int j = 0 ; j < V ; j++)
            dist[i][j] = graph[i][j];
    }
    for(int k = 0 ; k < V ; k++)  
    {  
        for(int i = 0 ; i < V ; i++)  
        {  
            for(int j = 0 ; j < V ; j++)  
            {  
                if(dist[i][k] + dist[k][j] < dist[i][j])  
                    dist[i][j] = dist[i][k] + dist[k][j];  
            }  
        }  
    }
    for(int i = 0 ; i < V ; i++)
    {
        for(int j = 0 ; j < V ; j++)
        {
            if(dist[i][j] == 10000000)
                cout << "INF" << " ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int V;
	    cin >> V;
	    int graph[V][100];
	    for(int i = 0 ; i < V ; i++)
	    {
	        for(int j = 0 ; j < V ; j++)
	            cin >> graph[i][j];
	    }
	    FloydWarshall(graph, V);
	}
	return 0;
}