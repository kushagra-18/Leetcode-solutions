class Solution {
public:
    
     int minHelper(int m,int n,vector<vector<int>> &grid,unordered_map<string,int> &mp){
        
        if(m == 1 && n == 1)
            return grid[m-1][n-1];
        
        if(m == 0 || n == 0)
            return 999999;
         
        string dp = to_string(m) + ',' + to_string(n); 
         
         if(mp.find(dp)!=mp.end())
             return mp[dp];
        
        int left = grid[m-1][n-1] + minHelper(m-1,n,grid,mp);
        
        int right = grid[m-1][n-1] + minHelper(m,n-1,grid,mp);
        
        return mp[dp] = min(left,right);
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        
        unordered_map<string,int> mp;
        
        return minHelper(m,n,grid,mp);
        
    }
    
    
};