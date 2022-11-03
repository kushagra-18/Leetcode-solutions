class Solution {
public:
    string replaceDigits(string s) {
        
        for(int i = 1;i<s.size();){
            
            s[i] = shift(s[i-1],s[i]);
            i+=2;
        }
        
        return s;
        
    }
    
    char shift(char c,int idx){

        return c + (idx - '0');
        
    }
};