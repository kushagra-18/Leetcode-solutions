class Solution {
public:
    
    int f(vector<int>&cost,int idx,vector<int>&dp){
        
        if(idx==cost.size())
            return 0;
        
        if(idx >= cost.size())
            return 9999;
        
        if(dp[idx]!=-1)
            return dp[idx];
        
        int first = cost[idx] + f(cost,idx+1,dp);
        int second = cost[idx] + f(cost,idx+2,dp);
        
        return dp[idx] = min(first,second);
        
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        
        vector<int>dp(n+1,-1);
        
//         for(int idx = 0;idx<n;idx++){
            
//             int first = cost[idx] + dp[idx+1];
//             int second = cost[idx] + dp[idx+2];
        
//             dp[idx] = min(first,second);
            
//         }
            
//         return min(dp[n-1],dp[n-2]);
       return min(f(cost,0,dp),f(cost,1,dp));
    }
    
};