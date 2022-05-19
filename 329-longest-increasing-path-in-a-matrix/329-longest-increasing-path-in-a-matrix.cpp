class Solution {
public:
    int helper(vector<vector<int>>& matrix,int n,int m,int i,int j,int prev,vector<vector<int>>&dp){
        
        if(i>=n || j>=m || i<0 || j<0 || prev >= matrix[i][j])
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int ans = 1 + max({helper(matrix,n,m,i+1,j,matrix[i][j],dp),
                           helper(matrix,n,m,i,j+1,matrix[i][j],dp),
                           helper(matrix,n,m,i-1,j,matrix[i][j],dp),
                           helper(matrix,n,m,i,j-1,matrix[i][j],dp),
                           });
        
        return dp[i][j] = ans;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        int ans = 0;
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){ 
                ans = max(ans,helper(matrix,n,m,i,j,-1,dp));
            }
        }
        
        return ans;
        
    }
};