class Solution {
public:
    
    int bfs(vector<vector<int>>&grid){
        
        queue<pair<int,int>> q;
        
        int n = grid.size();
        
      if (grid[0][0] != 0 || grid[n - 1][n - 1] != 0)
		{
			return -1;
		}
        
        int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1};
        int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
        
        q.push({0,0});
        
        int steps = 0;
        
        while(!q.empty()){
            
            steps++;
            int n = q.size();
            
            while(n--){
                
                int xx = q.front().first;
                int yy = q.front().second;
                q.pop();
                
                if(xx == grid.size()-1 && yy == grid.size()-1)
                    return steps;
                
                for(int i = 0;i<8;i++){
                    
                    int _x  = xx + dx[i];
                    int _y = yy + dy[i];
                    
                    if(_x < grid.size() && _x >= 0 && _y < grid.size() && _y >= 0 && grid[_x][_y]==0)
                    {

                        q.push({_x,_y});
                        grid[_x][_y] = 1;
                    
                    }
                    
                }
                
            }
            
        }
        
        return -1;
        
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        return bfs(grid);
        
    }
};