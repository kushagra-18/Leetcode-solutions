class Solution {
public:
    int maxPower(string s) {
        
        int n = s.size(),i,tot = 0,count = 1;
        
        if(n==1){
            
            return count;
        }
        
        for( i = 1;i<n;i++){

            if(s[i-1] == s[i]){
                
                count++;
                
            }            
        
            tot = max(tot,count);
            
            if(s[i-1]!=s[i]){
                
                count = 1;
            }
        }
        
        return tot;
        
    }
};