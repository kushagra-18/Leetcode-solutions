class Solution {
public:
    int longestValidParentheses(string s) {
        
        int open = 0, close = 0;
        int maxLen = 0;
        
        int n = s.size();
        
        for(int i = 0;i<n;i++){
            
            if(s[i]=='(')
                open++;
            else
                close++;
            
            if(open == close)
                maxLen = max(maxLen,open*2);
            
            if(close>open)
                close = open = 0;
        
        }
        
        open = close = 0;
        
        for(int i = n-1;i>=0;i--){
            
            if(s[i]=='(')
                open++;
            else
                close++;
            
            if(open == close)
                maxLen = max(maxLen,open*2);
            
            if(close<open)
                close = open = 0;
        }
        
        return maxLen;
        
    }
};