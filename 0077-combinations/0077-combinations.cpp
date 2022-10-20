class Solution {
public:
    void f(int n,int k,int idx,vector<vector<int>>&res,vector<int> &path){
        
        if(path.size() == k){
            
            res.push_back(path);
            return;
        }
        
        for(int i = idx;i<=n;i++){
                   
            path.push_back(i);
            f(n,k,i+1,res,path);
           path.pop_back();
            
        }       
    }
    
    vector<vector<int>> combine(int n,int k) {
        
        vector<vector<int>> res;
        vector<int> path;
        
        int idx = 1;
        
        f(n,k,idx,res,path);
        
        return res;
    }
};