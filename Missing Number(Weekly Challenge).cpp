class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size(),i;
        
    sort(nums.begin(),nums.end());
        
        
        for(i = 0;i<n;i++){
            
            
           if(i!=nums[i])
           {
               
               break;
           }
            
            
        }
        
        return i;
        
    }
};