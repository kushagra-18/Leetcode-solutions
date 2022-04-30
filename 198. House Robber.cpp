class Solution {
public:
    int robHelp(vector<int> &nums,int i, unordered_map<int,int> &dp){
        
        if(i == 0)
            return nums[i];
        
        if(i<0)
            return 0;
        
        if(dp.find(i)!=dp.end())
            return dp[i];
        
        int taken = nums[i] + robHelp(nums,i-2,dp);
        
        int notTaken = robHelp(nums,i-1,dp);
            
        return dp[i] = max(taken,notTaken);
        
    }
    int rob(vector<int>& nums) {
        
        unordered_map<int,int> dp;
        
        return robHelp(nums,nums.size()-1,dp);
        
    }
};