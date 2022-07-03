class Solution {
public:
    string decodeMessage(string key, string message) {
        
        unordered_map<char,char> mp;
        
        char alpha = 97;
        int i = 0;
         
        for(auto x:key){
            if(x!=' ' && !mp.count(x))
                mp.insert({x,alpha++});
        }
        
        string ans;
        for(auto x:message){
            
            if(x!=' ')
                ans.push_back(mp[x]);
            if(x==' ')
                ans.push_back(' ');
            
        }
        
        return ans;
        
    }
};