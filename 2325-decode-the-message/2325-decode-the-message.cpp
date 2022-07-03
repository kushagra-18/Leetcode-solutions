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
            
            ans.push_back(x==' '?' ':mp[x]);
            
        }
        
        return ans;
        
    }
};