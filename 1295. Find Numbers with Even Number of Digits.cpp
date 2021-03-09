class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int i,j = 0,n = nums.size();
        
        string s;
        
        for(i  = 0;i<n;i++){
            
         s =  to_string(nums[i]);
            
            if(s.size()%2==0){
                
                j++;
            }
            
            
        }
        
        return j;
        
    }
};