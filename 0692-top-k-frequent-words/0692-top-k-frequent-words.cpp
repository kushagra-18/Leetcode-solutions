class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int> mp;
        
        priority_queue<pair<int,string>> pq;
        
        vector<string>res;
        
        for(auto &x:words)
            mp[x]++;
        
        for(auto &x:mp){
            
            pq.emplace(-x.second,x.first);
            
            if(pq.size()>k)
                pq.pop();
            
        }
        
        vector<string> ans(pq.size());
        for(int i = pq.size() -1; i >=0; i--){
            ans[i] = pq.top().second;
            pq.pop();
        }
        return ans;
        
        // sort(res.begin(),res.end());
        
        return res;
        
    }
};