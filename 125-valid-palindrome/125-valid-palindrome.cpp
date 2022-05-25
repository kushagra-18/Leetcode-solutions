class Solution {
public:
    bool isPalindrome(string s) {
        
        string t = "";
        
        for(auto &x:s){
            if(isalnum(x))
                t.push_back(tolower(x));
        }
        
        int lo = 0;
        int hi = t.size()-1;
        
        while(lo<hi){
            
            if(t[lo++]!=t[hi--])
                return false;
        }
        
        return true;
        
    }
};