class Solution {
public:
    
    int solve(vector<vector<int>>& triangles ,int i,int j,vector<vector<int>>&dp){
        
        if(triangles.size()==i)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        return dp[i][j] =  triangles[i][j] + min(solve(triangles,i+1,j,dp),solve(triangles,i+1,j+1,dp));
    }
    int minimumTotal(vector<vector<int>>& triangles) {
        
        int i = triangles.size();
        
        vector<vector<int>>dp(i+1,vector<int>(i+1,-1));
        
        return solve(triangles,0,0,dp);
        
    }
};