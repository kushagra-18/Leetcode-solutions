class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i = 0;i<n;i++){
            
            for(int j = 0;j<m;j++){
                
                if(i > 0 && j > 0 && mat[i-1][j-1]!=mat[i][j])
                    return false;
                
            }
            
        }
        
        
        return true;
    }
};