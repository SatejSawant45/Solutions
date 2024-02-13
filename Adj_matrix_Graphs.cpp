#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , m;
    cin>>n>>m;
    // vector<vector<int>> adj(n+1,vector<int>(m+1,0));

    // int adj[n+1][m+1];
    
    // for(int i=0;i<m;i++)
    // {
    //     int u,v;
    //     cin>>u>>v;
    //     adj[u][v]=1;
    //     adj[v][u]=1;
    // }
    
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // vector<int> adj[n+1];

    // for(int i=0;i<m;i++)
    // {
    //     int u,v;
    //     cin>>u>>v;
    //     adj[u].push_back(v);
    //     adj[v].push_back(u);  // comment this out in case of an undirected graph

    // }


    // storing weighted graphs

    // matrix
    
     // for(int i=0;i<m;i++)
    // {
    //     int u,v,w;
    //     cin>>u>>v>>w;
    //     adj[u][v]=w;
    //     adj[v][u]=w;  // comment out incase of an undirected graph
    // }

    //list

    // 4-> {(2,1),(3,4) ... (node,weight)}


       vector<pair<int,int>> adj[n+1];

    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v,w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));  // comment this out in case of an undirected graph

    }
   


    return 0;



}
