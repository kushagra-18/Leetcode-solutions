class Solution {
public:
    
    void dfs(vector<vector<int>>& image,int i,int j,int n,int m ,int color,int newColor){
        
        if(i>=n || i<0 || j>=m || j<0 || image[i][j]!=color)
            return;
        
        image[i][j] = newColor;
        
         dfs(image,i+1,j,n,m,color,newColor);
         dfs(image,i,j-1,n,m,color,newColor);
         dfs(image,i,j+1,n,m,color,newColor);
         dfs(image,i-1,j,n,m,color,newColor);
        
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
    if(image.size()==0)
        return {};
        
        int n =  image.size();
        
        int m = image[0].size();
            
        int color = image[sr][sc];
        
        if(color == newColor)
            return image;
        
        dfs(image,sr,sc,n,m,color,newColor);
            
        return image;
            
    }
};