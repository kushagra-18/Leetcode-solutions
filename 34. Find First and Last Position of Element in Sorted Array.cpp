class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size(),i,count = 0,flag;
        
        
        for(i = 0;i<n;i++){
            
            if(nums[i]==target){
                
                count++;
                flag = i;
            }
            
        }
        
        
        if(count==0){
            
            vector <int> arr = {-1,-1};
            
            return arr;
        }else{
            
             vector <int> arr = {(flag-count) +1 ,flag};
            return arr;
        }
        
    }
};