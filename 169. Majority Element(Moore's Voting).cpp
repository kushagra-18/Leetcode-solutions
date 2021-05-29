class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        
        
        int majEl = 0, count = 1,i;
        
        for(i = 1;i<n;i++){
            
            if(nums[majEl] == nums[i])
                count++;
            else
                count--;
            
            if(count==0){
                
                majEl = i;
                count = 1;
                
                
            }
            
    
        }
        
        
         int temp = nums[majEl];
        
        int flag = 0,element;
        
        for(i = 0;i<n;i++){
            
            if(nums[i]==temp){
                
                flag++;
            }
            
        }
        
        if(flag>n/2)
          element = temp;
        
        return element;
        
    }
};