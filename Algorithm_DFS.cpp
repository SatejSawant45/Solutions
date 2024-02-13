 #include<bits/stdc++.h>
 using namespace std;
 // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(vector<int> &ans,vector<int> adj[],vector<int> &visited,int v)
    {
        for(int i=0;i<adj[v].size();i++)
        {
            if(visited[adj[v][i]]!=1)
            {
                visited[adj[v][i]]=1;
                ans.push_back(adj[v][i]);
                dfs(ans,adj,visited,adj[v][i]);
            }
        }
        // visited[v] = 1;
        // ans.push_back(v);
        // for(auto it:adj[v])
        // {
        //     if(!visited[it])
        //     {
        //         dfs(ans,adj,visited,it);
        //     }
        // }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) 
    {
        vector<int> visited(V,0);
        vector<int> ans;
        
        visited[0] = 1;
        ans.push_back(0);
        dfs(ans,adj,visited,0);
        
        return ans;
        
    }

    int main()
    {
        
    }