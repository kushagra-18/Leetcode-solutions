class Solution {
public:
    int dp[601][101][101];
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp,-1,sizeof(dp));
        
       return solve(0,m,n,strs.size(),strs);
    }
    int solve(int start,int m,int n,int size,vector<string>&strs){
        if(start>=size || m<0 || n<0)
            return 0;
        if(m==0 && n==0)
            return 0;
        if(dp[start][m][n]!=-1)
            return dp[start][m][n];
        
        // int i=start;
        int zeroes=count(strs[start].begin(),strs[start].end(),'0');
        int ones=strs[start].size()-zeroes;
        if(m>=zeroes && n>=ones)
            return dp[start][m][n]=max(1+solve(start+1,m-zeroes,n-ones,size,strs),solve(start+1,m,n,size,strs));
        else
            return dp[start][m][n]=solve(start+1,m,n,size,strs);
    }
};