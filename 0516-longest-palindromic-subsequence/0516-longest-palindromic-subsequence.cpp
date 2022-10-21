class Solution {
public:
    int helper(string a,string b,int n,int m,unordered_map<string,int>mp){
        
        if(n<0 || m<0)
            return 0;
        
        string dp = to_string(n) + ',' + to_string(m);
        
        if(mp.find(dp)!=mp.end())
            return mp[dp];
        
        if(a[n]==b[m])
            return mp[dp] = 1 + helper(a,b,n-1,m-1,mp);
        
        return mp[dp] = max(helper(a,b,n-1,m,mp),helper(a,b,n,m-1,mp));
        
    }
int longestPalindromeSubseq(string s) {

    string s1 = s;
    reverse(s1.begin(), s1.end());
    
    int n = s.size();
    int m = s1.size();

   vector<vector<int> > dp(n+1, vector<int>(m+1, 0)); 
        
    for(int i = 1;i<=n;i++){
        for(int j = 1; j<=m;j++){
                      
            if(s[i-1]==s1[j-1])
               dp[i][j] = 1 + dp[i-1][j-1];
            else
               dp[i][j] = max(dp[i-1][j],dp[i][j-1]);   
            
        }
    }
        
        return dp[n][m];    
        
    }
};