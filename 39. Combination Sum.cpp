class Solution {
public:
    
    void combinationSum(vector<int>& candidates,int target,int i, vector<vector<int>> &res,vector<int> &set){
        
        if(i == candidates.size()){
            
            if(target == 0)
                res.push_back(set);
            return;
        }
        
        //taking the idx
    if(target >= candidates[i]){
        
        set.push_back(candidates[i]);
        combinationSum(candidates,target - candidates[i],i,res,set);
        set.pop_back();
        }
        
        //not taking the same idx
        combinationSum(candidates,target,i+1,res,set);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
         vector<vector<int>> res;
        
        vector <int> set;
        
        combinationSum(candidates,target,0,res,set);
        
        return res;
        
    }
};