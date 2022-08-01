class Solution {
public:
    int f(int m, int n,unordered_map<string,int>&mp) {
     
        if(m ==  1 && n == 1)
            return 1;
        
        if(m < 0 || n < 0)
            return 0;
        
        string dp = to_string(m) + "," + to_string(n);
                
        if(mp.find(dp)!=mp.end())
            return mp[dp];
        
            
        mp[dp] = f(m,n-1,mp) + f(m-1,n,mp);
        
        return mp[dp];
        
    }
    int uniquePaths(int m, int n){
    
        vector<vector<int>>dp (m,vector<int>(n,1));
            
            for(int i =1;i<m;i++){
                for(int j = 1;j<n;j++){
                    
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                    
                }
            }
        
        return dp[m-1][n-1];
    }
};