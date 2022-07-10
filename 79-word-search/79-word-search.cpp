class Solution {
public:
    
    bool helper(vector<vector<char>>& board,int n,int m,int i,int j,int idx,string &word){
        
        if(idx == word.size()) 
            return true; 
        
        if(i>=n || i<0 || j>=m || j<0 || board[i][j]!=word[idx])
            return false;
        
        char temp = board[i][j];
        
        board[i][j] = '*';
        
       bool res = helper(board,n,m,i+1,j,idx+1,word)||
            helper(board,n,m,i-1,j,idx+1,word)||
            helper(board,n,m,i,j-1,idx+1,word)||
            helper(board,n,m,i,j+1,idx+1,word);
        
        board[i][j] = temp;
        
        return res;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        int n = board.size();
        int m = board[0].size();
        
        int idx = 0;
        
        for(int i = 0;i<n;i++)
            for(int j = 0;j<m;j++){

                if(board[i][j] ==word[0] && helper(board,n,m,i,j,idx,word))
                    return true;
            
            }
        
        return false;
    }
};