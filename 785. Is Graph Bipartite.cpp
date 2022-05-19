class Solution {
public:
    
    bool checkByp(int idx,vector<int> &color,vector<vector<int>>& graph){
        
        queue<int> q;
        q.push(idx);
        
        color[idx] = 1;
        
        while(!q.empty()){
            
            int top = q.front();
            q.pop();
            
            for(auto it:graph[top]){

                if(color[it]==-1){
                    
                    color[it] = 1 - color[top];
                    q.push(it);
                    
                }else if(color[it] == color[top])
                    return false;
            
            }
             
        }
        
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        int V = graph.size();
        vector <int> color(V+1,-1);
        
        for(int i = 0;i<V;i++){
            
            if(color[i]==-1)
                if(!checkByp(i,color,graph))
                    return false;
        }
       
        return true;
    }
    
};