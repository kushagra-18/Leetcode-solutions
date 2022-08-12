class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        priority_queue <pair<int,int>> pq;
        
        int i = 0;
        for(auto x:nums){
            
            pq.push({-x,i++});
            
            if(pq.size()>k)
                pq.pop();
            
        }
        
        priority_queue <pair<int,int>> qp;
        
        while(!pq.empty()){
            
            qp.push({-pq.top().second,pq.top().first});
            pq.pop();
            
            
        }
        
        // cout<<
        
        vector <int> res;
        while(!qp.empty()){
            
            res.push_back(-qp.top().second);
            
            qp.pop();
            
        }
        
        return res;
    }
};