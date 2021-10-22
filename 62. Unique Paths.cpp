class Solution {

public:      
    
    unordered_map<string,int> mp;
    
public:
    int uniquePaths(int m, int n) {

        
        if(m == 1 || n == 1)
            
            return 1;
        
        string dp = to_string(m) + "," + to_string(n);
                
        if(mp.find(dp)!=mp.end())
            return mp[dp];
        
            
        mp[dp] = uniquePaths(m,n-1) + uniquePaths(m-1,n);
        
        return mp[dp];
        
    }
};