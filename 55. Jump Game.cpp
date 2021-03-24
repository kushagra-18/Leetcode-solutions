class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        
        int last = n-1,i;
        
        for(i = n-1;i>=0;i--){
            
            if(i + nums[i] >= last){
                
                last = i; 
            }
            
            
        }
        
        return last == 0;
        
    }
};