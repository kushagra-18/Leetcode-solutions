class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        unordered_map<int,int> mp;
        
        priority_queue<int> pq;
        
        for(auto &x:arr)
            mp[x]++;
        
        for(auto &x:mp){
            
            pq.push(x.second);
            
        }
        
        
        int res = 0;
        
        int pair = 0;
        
        int n = arr.size();
        
        while(pair < arr.size()/2){
            
            pair += pq.top();
            res++;
            pq.pop();
            
        }
        
        return res;
    }
};