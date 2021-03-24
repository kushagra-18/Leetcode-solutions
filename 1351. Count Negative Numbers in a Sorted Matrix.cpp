class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int i,j,n = grid.size(),count = 0;

        
        for(i = 0;i<n;i++){
            
            for(j=grid[0].size()-1;j>=0;j--){
             
                if(grid[i][j]<0)
                    count++;
                }
            }
        
        return count++;
        
    }
};