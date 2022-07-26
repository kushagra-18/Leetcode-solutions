class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        map<int,int> mp;
        
        set<int> st;
        
        vector<int> loss;
        
        vector<int> noLoss;
        
        for(auto &x:matches){
            
            mp[x[1]]++;
            
        }
        
        for(auto &x:matches){
   
            if(mp.find(x[0])==mp.end()){
                st.insert(x[0]);
            }
        }
        
        
        for(auto &x:st)
            noLoss.push_back(x);
        
        
        for(auto &x:mp){
            
        if(x.second==1)
            loss.push_back(x.first);
            
        }
        
        
        return {noLoss,loss};
        
    }
};