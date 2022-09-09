class Solution {
public:
        
    unordered_map <int,int> mp;
    
    int climbStairs(int n) {
        
        if(n<0){
            
            return 0;
        }
        
        if(n<=1){
            
            return 1;
        }
        
        int dp = n;
        
        if(mp.find(dp)!=mp.end())
            return mp[dp];
        
        mp[dp] =  climbStairs(n-1) + climbStairs(n-2);
        
        return mp[dp];
        
    }
};