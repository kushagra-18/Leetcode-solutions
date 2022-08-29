class Solution {
public:
    void islandHelper(vector<vector<char>>&grid,int i,int j,int m,int n){
        
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!='1')
            return;
        
        grid[i][j] = '*';
        
        islandHelper(grid,i-1,j,m,n);
        islandHelper(grid,i,j-1,m,n);
        islandHelper(grid,i+1,j,m,n);
        islandHelper(grid,i,j+1,m,n);
       
             
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int m  = grid.size();
        int n = grid[0].size();
        
        if(m == 0)
            return 0;
        
        int numOfIslands = 0;
        
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                
                if(grid[i][j]=='1'){
                    islandHelper(grid,i,j,m,n);
                    numOfIslands++;   
                }
            }
        }
        
        return numOfIslands;
        
    }
};