class Solution {
public:
    bool isAnagram(string s, string t) {
        
        
        if(s.size()!= t.size()){

            return false;
        
        }
        
        int flag = 0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        int i = 0;
        
        while(i!=s.size()){
            
            if(s[i]!=t[i]){
                
                flag = 1;
                break;
             
            }
        i++;
        }
            
    if(flag == 0)
        return true;
            else return false;
        
    }
};