class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int count = 0,i,j;
        int n = nums.size();
        
        for(i = 0;i<n;i++){
            
            for(j = 0;j<n;j++){
                
                if(i < j){
                                        
                    if(nums[i] == nums[j]){
                        
                        
                        count++;
                    }
                    
                    
                    
                }
            }
            
            
        }
        
        return count;
        
    }
};