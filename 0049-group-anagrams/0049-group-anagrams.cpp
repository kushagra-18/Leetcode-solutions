class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;
        
        vector<vector<string>> res;
        
        for(auto&s:strs){
            
            string temp = s;
            
            sort(temp.begin(),temp.end());
            
            mp[temp].push_back(s);
            
            // mp.insert({temp,s});
            
        }
        
        
        for(auto &s:mp){
            
            res.push_back(s.second);
            
        }
        
        return res;
        
    }
};