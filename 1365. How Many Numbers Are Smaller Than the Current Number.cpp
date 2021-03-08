class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> newVec(n, 0);
        int i,count = 0;
    
        
        for(i = 0;i<n;i++){
            
            for(int j = 0 ;j<n;j++){
                
                if(i!=j){
                    
                    if(nums[i] > nums[j])
                        count++;
                    
                }
                      
            }
            
           newVec[i] = count; 
            count = 0;
        }
        
        
        
        return newVec;
    }
};