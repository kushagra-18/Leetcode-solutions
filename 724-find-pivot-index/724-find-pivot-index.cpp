class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n==0)
            return -1;   
        
        int rightSum = 0;
        int leftSum = 0;
        
        for(auto x:nums)
            rightSum += x;
        
        rightSum += -nums[0];
        
        for(int i = 0;i<n;i++){
            
            if(i>0){
            leftSum += nums[i-1];
            
            rightSum -= nums[i];
            }
            
            if(leftSum == rightSum)
            {
               return i;
            }
            
            
        }
        
        return -1;
        
    }
};