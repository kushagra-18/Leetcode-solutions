class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> mp,m;
        
        for(auto x:arr)
            mp[x]++;
        
        for(auto x:mp)
            m[x.second]++;
        
        for(auto x:m)
        {
            if(x.second > 1)
                return false;
        
        }
        
        return true;
    }
};