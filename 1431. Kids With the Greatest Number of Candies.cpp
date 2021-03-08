class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        
       int max =  *max_element(candies.begin(), candies.end());
        
        int i;
        
        vector <bool> candiesNew;
        
        int n =candies.size();
        
        for(i = 0;i<n;i++){
            
            if(max <= candies[i] + extraCandies){
                
                candiesNew.push_back(true);
            }else
                
                candiesNew.push_back(false);
            
            
        }
        
        return candiesNew;
    }
};