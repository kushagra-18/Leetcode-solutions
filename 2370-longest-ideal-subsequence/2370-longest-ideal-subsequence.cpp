class Solution {
public:
    int f(string &s,int idx,int &k,int prev,vector<vector<int>>&dp){
        
        if(idx>=s.size())
            return 0;
    
        if(dp[idx][prev]!=-1)
            return dp[idx][prev];
        
        int taken = 0;
        int notTaken = 0;
        
        if(prev == 0 || abs(s[idx]-prev) <= k){
            
            taken = 1 + f(s,idx+1,k,s[idx],dp);
            
        }
        
        notTaken = f(s,idx+1,k,prev,dp);
   
        return dp[idx][prev] = max(taken,notTaken);
        
    }
    int longestIdealString(string s, int k) {
        
        int prev = 0;
        
          vector<vector<int>>dp (s.size()+1,vector<int>(150,-1));
        
        return f(s,0,k,prev,dp);
        
        
    }
};