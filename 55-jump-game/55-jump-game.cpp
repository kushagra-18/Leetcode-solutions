class Solution {
public:
    bool f(vector<int>& nums,int idx,vector<int> &dp){
     
        if(idx == nums.size()-1)
            return true;
        
         if(idx>=nums.size()) 
             return false;
        
        if(dp[idx]!=-1)
            return dp[idx];
        
        for(int i = 1;i<=nums[idx];i++){
            
            if(f(nums,idx+i,dp))
                return dp[idx] = true;
            
        }
        
        return dp[idx] = false;
        
    }
    
    
    bool canJump(vector<int>& nums) {
        
        vector<int> dp(nums.size()+1,-1);
        return f(nums,0,dp);
        
    }
};