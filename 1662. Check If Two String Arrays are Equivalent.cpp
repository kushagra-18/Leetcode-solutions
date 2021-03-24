class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        
        int i,j;
            string s = "", s1 = "";
            
            
            for(i = 0;i<word1.size();i++){
                
                s = s + word1[i];
                         
                
            }
        
         for(j = 0;j<word2.size();j++){
                
                s1 = s1 + word2[j];
                     
                
            }
        
        
        if(s == s1){
            
            return true;
            
        }else{
            
            return false;
        }
        
    }
};