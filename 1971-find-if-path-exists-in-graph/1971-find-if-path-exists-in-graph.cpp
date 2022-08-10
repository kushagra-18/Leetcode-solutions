class Solution {
public:
    
    void dfs(int u,vector<int> adj[],int e,vector<int> &vis){
        
        // if(u == e )
        //     return;
        
        cout<<u<<" ";
        vis[u] = true;
        
        for(auto v:adj[u]){
            if(!vis[v])
                dfs(v,adj,e,vis);
        }
        
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int d) {
        
        vector<int> adj[n];
        
        vector<int> vis(n,false);
        
        for(int i = 0;i<edges.size();i++){
            
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            
        }
        
        
        dfs(source,adj,d,vis);
        
        // cout<<vis[d];
        
        return vis[d];
        
    }
};