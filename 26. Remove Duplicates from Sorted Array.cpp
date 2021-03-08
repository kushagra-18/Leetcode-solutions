class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int temp;
        int i,j = 1;
        
        if(nums.empty()){
            
            j = 0;
            
        } else {
            
             temp = nums[0];

        for(i = 0 ;i<n;i++){
        
            
            if(nums[i]!= temp)
            {
               // nums[j++] = nums[i];
            temp = nums[i];
            nums[j++] = temp;
            }
                       
          }
            // nums = newVec;
        }
        
       
        
        return j;
        
        
    }
};