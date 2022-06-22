class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        
        int minEl = INT_MAX;
        
        int maxEl = 0;
        
        for(int i = 0;i<n;i++){
            
            minEl = min(minEl,prices[i]);
            
            maxEl = max(maxEl,prices[i] - minEl);
            
        }
        
        return maxEl;
        
    }
};