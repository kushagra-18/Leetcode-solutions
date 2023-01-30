class Solution {
public:
int solve(int i,int j,int m,int n,vector<vector<int>>& matrix,unordered_map<string,int> &mp)
    {
        if(i<0 || j<0 || i>m || j>n) return INT_MAX;
        if(i == m) return matrix[i][j];
    
        string dp = to_string(i) + ',' + to_string(j);
    
        if(mp.find(dp)!=mp.end())
            return mp[dp];
        
       return mp[dp] = matrix[i][j] + min(solve(i+1,j-1,m,n,matrix,mp),
           min(solve(i+1,j,m,n,matrix,mp), solve(i+1,j+1,m,n,matrix,mp)));
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int ans = INT_MAX;
        
        unordered_map<string,int> mp;
        
        
        for(int j=0;j<n;j++)
        {
           ans = min(ans,solve(0,j,m-1,n-1,matrix,mp));    
        }
        return ans;
    }
};