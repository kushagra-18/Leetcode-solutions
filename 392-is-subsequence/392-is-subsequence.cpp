class Solution {
public:
    /**
    
    */
    bool isSubsequence(string s, string t) {
        
      int count = 0;
        
      int n = t.size();  
        
       for(int i = 0;i<n && count < s.size();i++){

           if(s[count] == t[i]){
               
               count++;     
           }        
       
       } 
        return (count==s.size());
        
    }
};