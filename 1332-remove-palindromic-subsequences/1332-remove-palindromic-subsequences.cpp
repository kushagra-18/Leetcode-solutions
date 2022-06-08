class Solution {
public:
    
    bool isPal(string &s){
        
        int n = s.size();
        int lo = 0;
        int hi = n-1;
        
        while(lo<=hi){
            
            if(s[lo++]!=s[hi--])
                return false;  
        }
        
        return true;
    }
    int removePalindromeSub(string s) {
        
        if(s.size()==0)
            return 0;
        
       return (isPal(s)?1:2);
        
        
    }
};