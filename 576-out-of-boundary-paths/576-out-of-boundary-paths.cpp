class Solution {
public:
    int mod = 1e9+7;
    long long int f(int m,int n,int N,int i,int j, vector<vector<vector<int>>>&dp){
     
    if (i == m || j == n || i < 0 || j < 0) return 1;
        
        if(dp[N][i][j]!=-1)
            return dp[N][i][j];
        
    if (N == 0) return 0;
        
     dp[N][i][j] = (f(m, n, N - 1, i - 1, j,dp)
         + f(m, n, N - 1, i + 1, j,dp)
         + f(m, n, N - 1, i, j - 1,dp)
         + f(m, n, N - 1, i, j + 1,dp))%mod;
        
        return dp[N][i][j]%mod;
 
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
        
        vector<vector<vector<int>>>dp(maxMove+50,vector<vector<int>>(startRow+50,vector<int>(startColumn+50,-1)));
        
        return f(m,n,maxMove,startRow,startColumn,dp);
    }
    
};