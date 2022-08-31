class Solution {
public:
    
    void f(vector<vector<int>>&res,int idx,vector<int> nums){
        
        if(idx == nums.size()){
            
            res.push_back(nums);
            return;
    
        }
        
        
        for(int i = idx;i<nums.size();i++){
            
            if(i!=idx && nums[i]==nums[idx])
                continue;
            
            swap(nums[i],nums[idx]);
            f(res,idx+1,nums);
          //  swap(nums[idx],nums[i]);
            
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>> res;
         sort(nums.begin(), nums.end());
        
        int idx = 0;
        
        f(res,idx,nums);
        
        return res;
    }
};