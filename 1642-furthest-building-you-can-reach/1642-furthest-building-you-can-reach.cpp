class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
       priority_queue<int> pq;
        
        int n = heights.size();
        
        for(int i = 0;i<n-1;i++){
            
            int dist = heights[i+1] - heights[i];
            
            if(dist <= 0)
                continue;
            
//             else
            
//             will be using bricks
            
            bricks -= dist;
            
            pq.push(dist);
            
            if(bricks<0){
                int top = pq.top();
             
                bricks += top;
                
                pq.pop();
                
                ladders--;
            }
            
            if(ladders < 0)
                return i;
                
            
        }
        
        return n-1;
    }
};