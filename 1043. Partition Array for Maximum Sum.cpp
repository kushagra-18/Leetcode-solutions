class Solution {
public:
    int f(vector<int>& arr, int k,int idx,vector<int>&dp){
        
        int n = arr.size();
        
        if(idx == n)
            return 0;
        
        if(dp[idx]!=-1)
            return dp[idx];
        
        int len = 0;
        int maxx = -1;
        int maxAns = -1;
        
        for(int i = idx;i< min(idx+k,n);i++){
            
            len++;
            
            maxx = max(maxx,arr[i]);
            
            int sum = maxx*len + f(arr,k,i+1,dp);
            
            maxAns = max(maxAns,sum);
        }
        
        return dp[idx] = maxAns;
        
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        
        int n = arr.size();
        
        vector<int> dp(n+1,-1);
        
        return f(arr,k,0,dp);
    }
};