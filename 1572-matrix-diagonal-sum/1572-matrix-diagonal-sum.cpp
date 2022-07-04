class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int n = mat.size();
        
        int tot = 0;
        
        int centerVal = 0;
        // if(n>1)
        //     centerVal = mat[n-2][n-2];
        
        for(int i = 0;i<n;i++)
            for(int j = 0;j<n;j++){
                
                if(i==j || i+j == n-1)
                    tot += mat[i][j];
            }
        
        return n%2==0?tot:tot-centerVal;
    }
};