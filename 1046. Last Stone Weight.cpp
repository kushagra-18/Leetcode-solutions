class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> pq;
        
        for(auto x: stones)
            pq.push(x);        
        
        
        int first,second;
        
        while(!pq.empty()){
            
                if(pq.size() == 1)
                    return pq.top();
                        
            first = pq.top();
            
            pq.pop();
            
            second = pq.top();
            
            pq.pop();
            
            if(first!=second)
                pq.push(first-second);          
            
        }
        return 0;
        
    }
};