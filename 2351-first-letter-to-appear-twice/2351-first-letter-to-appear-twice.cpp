class Solution {
public:
    char repeatedCharacter(string s) {
        
        unordered_map<int,int> mp;
        int idx = 9999999;

        for(int i = 0;i<s.size();i++){
           
            if(mp.find(s[i])!=mp.end())
            {
                idx = min(i,idx);
            }
             mp[s[i]]++;
            
        }
        
        
        return s[idx];
        
    }
};