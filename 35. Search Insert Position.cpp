class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int i,n = nums.size(),res;
        
        for(i = 0; i<n;i++){
            
            if(nums[i]==target || nums[i] > target){
                
                return i;
                
            }
            
            
        }
        
        return n;
        
    }
};