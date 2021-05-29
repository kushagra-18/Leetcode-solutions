class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int n = s.size(),i;
        
        if(n==0){
            
            return t[0];
        }
        
        
        sort(s.begin(),s.end());
        
        char res;
        sort(t.begin(),t.end());
        
 
        
        for(i = 0;i<n;i++){
            
            if(s[i]!=t[i]){
                
                res = t[i];
                break;
            }else{
                
                res = t[n];
                
            }
            
        }
        return res;
    }
};