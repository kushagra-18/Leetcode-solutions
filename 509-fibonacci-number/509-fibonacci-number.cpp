class Solution {    
unordered_map <int,int> mp;
public:
    int fib(int n) {
        
        if(n <=1)
            return n;
        
        int dp = n;
        
        if(mp.find(dp)!=mp.end())
            return mp[dp];
        
        mp[dp] =  fib(n-1) + fib(n-2);
        
        return mp[dp];
        
    }
};