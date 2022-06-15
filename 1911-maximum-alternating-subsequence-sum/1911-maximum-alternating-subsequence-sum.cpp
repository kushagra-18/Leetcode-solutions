class Solution {
public:
    
    long long solve(vector<int>&nums,int idx,bool flag,vector<vector<long long int>>&dp){
//         base case
        
        if(idx==nums.size())
            return 0;
        
//         dp
        if(dp[idx][flag]!=-1)
            return dp[idx][flag];
        
//         take
        
        long long take;
        if(flag)
            take = nums[idx] + solve(nums,idx+1,!flag,dp);
        else
            take = -nums[idx] + solve(nums,idx+1,!flag,dp);
        
        long long notTake = solve(nums,idx+1,flag,dp);
        
        return dp[idx][flag] = max(take,notTake);
            
    }
    long long maxAlternatingSum(vector<int>& nums) {
        
        vector<vector<long long int>> dp(nums.size()+1,vector<long long int> (2,0));
        
        for(int idx = nums.size()-1;idx>=0;idx--)
            for(int flag = 0;flag<2;flag++){

                long long take;
                if(flag)
                    take = nums[idx] + dp[idx+1][!flag];
                else
                    take = -nums[idx] + dp[idx+1][!flag];
        
                long long notTake = dp[idx+1][flag];
        
                dp[idx][flag] = max(take,notTake);
                 
            }
        
        return dp[0][1];
        
        return solve(nums,0,true,dp);
        
    }
};