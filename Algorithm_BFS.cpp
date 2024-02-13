    #include<bits/stdc++.h>

    using namespace std;

    vector<int> bfsOfGraph(int V, vector<int> adj[]) 
    {
        queue<int> q;
        vector<int> ans;
        vector<int> visited(V,0);
        
        q.push(0);
        visited[0]=1;
        ans.push_back(0);
        
        while(!q.empty())
        {
           vector<int> t = adj[q.front()];
           for(int i=0;i<t.size();i++)
           {
               if(visited[t[i]]!=1)
               {
                   q.push(t[i]);
                   visited[t[i]]=1;
                   ans.push_back(t[i]);
                   
               }
               
           }
           q.pop();
        }
        
        //Time complexity = o(n) + o(Total degrees = 2 * no of edges)
        
        return ans;
        
        
        
        
    }

    int main()
    {
    

     }