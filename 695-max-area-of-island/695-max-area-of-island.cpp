class Solution {
public:
    int islandHelper(vector<vector<int>>&grid,int i,int j,int m,int n){
        
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!=1)
            return 0;
        
        grid[i][j] = 2;
        
        return 1 +
       + islandHelper(grid,i+1,j,m,n)
       + islandHelper(grid,i,j+1,m,n)
       + islandHelper(grid,i-1,j,m,n)
       + islandHelper(grid,i,j-1,m,n);
        
        // return area;     
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int m  = grid.size();
        int n = grid[0].size();
        
        if(m == 0)
            return 0;
        
        int maxArea = 0;
        
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                
                if(grid[i][j]==1){
                    int area = islandHelper(grid,i,j,m,n);
                    maxArea = max(maxArea,area);
                    // numOfIslands++;   
                }
            }
        }
        
        return maxArea;
        
    }
};