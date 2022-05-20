class Solution {
    int dfs(vector<vector<int>>& grid, int i, int j, int s, int c) {
        // invalid indexes or position
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == -1)
            return 0;
        
        // we reached target, now compare if the number of steps matches the number of empty cells
        if(grid[i][j] == 2)
            return s == c ? 1 : 0;
        
        // mark as processed
        grid[i][j] = -1;
        
        // explore all the directions
        int path = dfs(grid, i + 1, j, s + 1, c) 
                 + dfs(grid, i - 1, j, s + 1, c) 
                 + dfs(grid, i, j + 1, s + 1, c) 
                 + dfs(grid, i, j - 1, s + 1, c);
        
        // backtrack and mark as available
        grid[i][j] = 0;
        
        return path;
    }
    
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        // starti & startj hold the position of starting square
        // count holds the number of empty cells
        int starti = 0, startj = 0, count = 0;
        
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == 1) {
                    starti = i;
                    startj = j;
                }
                
                if(grid[i][j] != -1)
                    count++;
            }
        }
        
        return dfs(grid, starti, startj, 1, count);
    }
};