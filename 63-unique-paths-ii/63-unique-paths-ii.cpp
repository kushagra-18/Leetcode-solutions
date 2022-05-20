class Solution {
public:
    
    int f(int m,int n,vector<vector<int>> &a,unordered_map<string,int> &mp){
        
        if(m>=1 && n>=1 && a[m-1][n-1])
            return 0;
                
        if(m ==  1 && n == 1)
            return 1;
        
        if(m < 1 || n < 1)
            return 0;
        
        string dp = to_string(m) + "," + to_string(n);
                
        if(mp.find(dp)!=mp.end())
            return mp[dp];
        
            
        mp[dp] = f(m,n-1,a,mp) + f(m-1,n,a,mp);
        
        return mp[dp];
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        unordered_map<string,int> mp;
        
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        return f(m,n,obstacleGrid,mp);
        
    }
};