class Solution {
public:
    int percentageLetter(string s, char letter) {
        
        unordered_map<char,int>mp;
        
        for(auto x:s){
            
            mp[x]++;
        }
        
        int n = s.size();
        
        int m = -1;
        
        for(auto x:mp){
            
            if(x.first==letter)
                m = x.second;
            
        }
        
        if(m==-1)
            return 0;
        
        m = m*100;
        
        float ans = (m/n);
        
        
        
        return round(ans);
        
    }
};