class Solution {
public:
    
   void f(vector <int> path,vector<vector<int>>&res,int sum,int idx,int k,int n){
        
        if(k==0){
            
            if(sum==n)
                res.push_back(path);
            return;
        }
        
        for(int i = idx;i<10;i++){
            
//             taking the idx for sum
            path.push_back(i);
            
            f(path,res,sum+i,i+1,k-1,n);
//             not taking
            path.pop_back();
            // f(path,res,sum+i,i,k-1,n);
               
        }      
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector <int> path;
        vector<vector<int>> res;
        
        int sum = 0;
        int idx = 1;
        f(path,res,sum,idx,k,n);
        
        return res;
        
    }
};