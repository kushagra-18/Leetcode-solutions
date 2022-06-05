class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n==1)
            return nums[0];
    
        for(int j = n-1;j>=1;j--){
            for(int i = 0;i<j;i++){
                int temp = (nums[i] + nums[i+1])%10;
                nums[i] = (temp);
            }
            
        }
        
        return nums[0];
        
    }
};