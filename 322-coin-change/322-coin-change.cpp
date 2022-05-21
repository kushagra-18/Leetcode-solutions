class Solution {
public:
    int f(vector<int>& coins, int tot,int idx,vector<vector<int>> &dp){
        
    if(idx == 0){
        if(tot%coins[0] == 0)
            return tot/coins[0];
        else
            return 9999999;
    }
        
        if(dp[idx][tot] !=-1)
            return dp[idx][tot];
        
        int notTake = 0 + f(coins,tot,idx-1,dp);
        
        int take = INT_MAX;
        
        if(coins[idx]<=tot)
            take = 1 + f(coins,tot-coins[idx],idx,dp);
        
        return  dp[idx][tot] = min(take,notTake);
        
    }
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        
        vector<vector<int>> dp(n+1,vector<int> (amount+1,-1));
        
        int ans =  f(coins,amount,n-1,dp);
        
        return (ans == 9999999) ?-1:ans;
       
        
    }
};