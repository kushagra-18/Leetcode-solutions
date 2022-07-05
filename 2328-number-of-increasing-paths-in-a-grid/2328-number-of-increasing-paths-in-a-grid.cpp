class Solution {
public:
    int mod=1e9+7;
    int helper(vector<vector<int>>& matrix,int n,int m,int i,int j,int prev,vector<vector<int>>&dp){
        
        if(i>=n || j>=m || i<0 || j<0 || prev >= matrix[i][j])
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        long long ans = 1;
        
        ans += (helper(matrix,n,m,i+1,j,matrix[i][j],dp)+
                           helper(matrix,n,m,i,j+1,matrix[i][j],dp)+
                           helper(matrix,n,m,i-1,j,matrix[i][j],dp)+
                           helper(matrix,n,m,i,j-1,matrix[i][j],dp))%mod;
                           
        
        return dp[i][j] = ans;
    }
    int countPaths(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        long long int count = 0;
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){ 
               count+= helper(matrix,n,m,i,j,-1,dp)%mod;
            }
        }
        
        return count%mod;
        
    }
};