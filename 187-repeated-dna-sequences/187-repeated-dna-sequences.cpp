class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        int n = s.size();
        
        if(n<10)
            return {};
        
        unordered_map<string,int> mp;
        
        vector<string> res;
        
        for(int i = 0;i<n-9;i++){
            
            string temp = s.substr(i,10);
            mp[temp]++;
        }
        
        for(auto x:mp)
            if(x.second>1)
                res.push_back(x.first);
        
        
        return res;
        
    }
};