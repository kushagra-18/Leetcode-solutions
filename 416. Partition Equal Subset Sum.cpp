class Solution {
public:
    
    bool f(vector<int>& nums,int tot,int idx,vector<vector<int>>& dp){
        
        if(idx == 0)
            return nums[0] == tot;
            
        if(tot == 0)
            return true;
        
        // string dp = to_string(idx) + ',' + to_string(tot);
        
        // if(mp.find(dp)!=mp.end())
        //     return mp[dp];
        
          if(dp[idx][tot]!=-1)
        {
            return dp[idx][tot];
        }
        
        bool notTake = f(nums,tot,idx-1,dp);
        
        bool take = false;
        
        if(nums[idx]<= tot)
            take = f(nums,tot-nums[idx],idx-1,dp);
        
        return dp[idx][tot] = take | notTake;
        
        
    }
    bool canPartition(vector<int>& nums) {
        
        int tot = 0;
        
        for(auto x:nums)
            tot += x;
        
        if(tot%2!=0)
            return false;
        
        tot = tot/2;
        
        vector<vector<int>> dp(nums.size()+1,vector<int>(tot+1,-1));
        
        return f(nums,tot,nums.size()-1,dp);
        
    }
};