class Solution {
public:
    int countTime(string t) {
        
        int n = t.size();
        
        int ans = 1;
    if(t[0] == '?' && t[1] == '?') ans = ans * 24;
        else{
            if(t[0]=='?'){
                
                if(t[1]>'3'){   
                    ans *= 2;
            
                }else{
                    
                    ans *= 3;
                    
                }
                
            }
            
            if(t[1]=='?'){
                if(t[0]=='2'){
                    ans *= 4;  
                }else{
                    ans *= 10; 
                }
                
            }
        }
            
            if(t[3]=='?'){
                
               ans *= 6;
                
            }
            
            if(t[4]=='?'){
                
                ans *= 10;
                
            }
        
            
        
        return ans;
        
    }
};