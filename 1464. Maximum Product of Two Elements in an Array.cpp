class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int i,j = 0, n = nums.size(),tot = 0;
        
        sort(nums.begin(),nums.end());
        
        if(n == 2){
            
            tot = (nums[1] -1) * (nums[0] -1);
        }else{
        
        tot = (nums[n-1]-1) * (nums[n-2]-1);
        
        }
            
            
            
            
        return tot;
        
    }
};