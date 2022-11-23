class Solution {
public:
    bool isValid(vector<vector<char>>& board, int row,int col,char c){
        
        for(int i = 0;i<9;i++){
            
            string temp = to_string(row) + ',' + to_string(col);
            string temp1 = to_string(row) + ',' + to_string(i);
            
           if(temp==temp1)
               continue;
            
            if(board[row][i]==c){
                return false;
            }
            
            temp1 = to_string(i) + ',' + to_string(col);
            
            if(temp==temp1)
                continue;

            if(board[i][col]==c){
                return false;
            }
            
            temp1 = to_string(3*(row/3) + i/3) + ',' + to_string(3*(col/3) + i%3);
             
            if(temp==temp1)
                continue;

            
            if(board[3*(row/3) + i/3][3*(col/3) + i%3]==c){
                return false;
            }

        }

        return true;
        
    }
    bool isValidSudoku(vector<vector<char>>& board) {
      int n = board.size();
        int m = board[0].size();
        
        for(int i = 0;i<n;i++){
            
            for(int j = 0;j<m;j++){
                
                if(board[i][j]!='.'){

                    char c = board[i][j];

                    if(!isValid(board,i,j,c))
                        return false;
                    
                }
                
            }
            
        }
        
        return true;
    }
};