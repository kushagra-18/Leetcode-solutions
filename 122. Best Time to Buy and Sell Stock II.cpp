class Solution {
public:   
    int f(vector<int>& prices,int idx,int buy,int cap,vector<vector<vector<int>>>&mp){
        
        if(cap == 0)
            return 0;
        
        if(prices.size()==idx)
            return 0;
        
        if(mp[idx][buy][cap]!=-1)
            return mp[idx][buy][cap];
        
        int profit = 0;
        if(buy){
            
            int taken = -prices[idx] + f(prices,idx+1,0,cap,mp);
            int notTaken = f(prices,idx+1,1,cap,mp);
            profit = max(taken,notTaken);
            
        }else{
        
             int taken = prices[idx] + f(prices,idx+1,1,cap-1,mp);
             int notTaken = f(prices,idx+1,0,cap,mp);
             profit = max(taken,notTaken);

        }
        
        return mp[idx][buy][cap] = profit;
        
    }
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        
        vector<vector<vector<int>>>dp(n,vector<vector<int>> (2,vector<int>(3,-1)));
        
        return f(prices,0,1,2,dp);
        
    }
};