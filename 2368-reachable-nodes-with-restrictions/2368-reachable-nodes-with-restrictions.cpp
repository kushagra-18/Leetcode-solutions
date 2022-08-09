class Solution {
public:
    
    void dfs(int v,vector<int> adj[],vector<int> &vis,int &count){
        
        count++;
        
        vis[v] = true;
        
        for(auto u:adj[v]){
        
            if(!vis[u])
                dfs(u,adj,vis,count);
        }
        
        
    }
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        
        vector<int> adj[n];
        
        vector<int> vis(n+1,false);
        
        for(auto x:restricted){
            
            vis[x] = true;
            
        }
        
        
//         make adj list
        
        for(int i = 0;i<edges.size();i++){
            
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            
        }
        
        int count = 0;
        int v = 0;
        
//         call to dfs
        
        dfs(v,adj,vis,count);
        
        return count;
        
    }
};