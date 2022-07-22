class Solution {
public:
    
    void f(vector<vector<int>>&res,int idx,vector<int> nums){
        
        if(idx == nums.size()){
            
            res.push_back(nums);
    
        }
        
        
        for(int i = idx;i<nums.size();i++){
            
            swap(nums[i],nums[idx]);
            f(res,idx+1,nums);
          //  swap(nums[idx],nums[i]);
            
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> res;
        
        int idx = 0;
        
        f(res,idx,nums);
        
        return res;
    }
};