class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        
        priority_queue<pair<int,int>> pq;
        
        for(auto x:nums)
            if(x%2==0)
                mp[x]++;
        
        for(auto x:mp)
                pq.push({x.second,x.first});
        // cout<<mp.size();
        if(mp.size()==0)
            return -1;
        
        int topFreq = pq.top().first;
        
        vector<int>res;
        
        while(!pq.empty()){
            
            if(pq.top().first==topFreq)
            {
                res.push_back(pq.top().second);
                pq.pop();
            }else{
                break;
            }
            
        }
        
        sort(res.begin(),res.end());
        
        return res[0];
        
    }
};