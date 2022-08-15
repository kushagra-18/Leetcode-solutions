class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int maxx = INT_MIN;
        
        vector<vector<int>> res(n - 2, vector<int>(n - 2));
        
        for(int i = 0;i<n-2;i++){
            
            for(int j = 0;j<m-2;j++){
                
                for(int k = i;k<i+3;k++){
                    
                    for(int m = j;m<j+3;m++){
                        
                        res[i][j] = max(res[i][j],grid[k][m]);
                        // res[i][j] = maxx;
                    }
                    
                    
                    maxx = INT_MIN;
                    
                }
                
            }
            
        }
        
        return res;
        
    }
};