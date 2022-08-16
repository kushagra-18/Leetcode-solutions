class Solution {
public:
    int firstUniqChar(string s) {
        
        int n = s.size();
        
        unordered_map<char,int> mp;
        
        for(auto &x:s)
            mp[x]++;
        
        for(int i = 0;i<n;i++){
            
            if(mp[s[i]]==1)
                return i;
            
            
        }
        
        return -1;
    }
};