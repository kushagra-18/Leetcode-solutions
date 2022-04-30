class Solution {
public:
    
    int f(int n,vector <int> &dp){
        
        if(n<0)
            return 0;
        
        if(n==0)
            return n;
        
        if(n==1 || n==2)
            return 1;
        
        if(dp[n]!=-1)
            return dp[n];
        
        int ans = f(n-1,dp) + f(n-2,dp) + f(n-3,dp);
        
        return dp[n] = ans;

    }
    int tribonacci(int n) {
        
        vector <int> dp(39);
        
        dp[0] = 0;
        dp[1] = dp[2] = 1;
        
        for(int i = 3;i<=n;i++){
            
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
            
        }
        
        return dp[n];
        // return f(n,dp);
    }
};