class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int tot=0;
        for(int i=0;i<accounts.size();i++)
        {
            int sum=accumulate(accounts[i].begin(),accounts[i].end(),0);
            
            tot = max(sum,tot);
         
        }
        return tot;
    }
};