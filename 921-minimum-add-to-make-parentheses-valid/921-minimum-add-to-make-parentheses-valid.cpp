class Solution {
public:
    int minAddToMakeValid(string s) {
        
        
        int open = 0;
        int res = 0;
        
        for(auto &x:s){
            
            if(x=='(')
                open++;
            else if(x== ')')
                open--;
            
            if(open==-1){
                res++;
                open=0;
            }
            
        }
        
        return  open+res;
        
    }
};