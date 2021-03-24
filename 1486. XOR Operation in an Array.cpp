class Solution {
public:
    int xorOperation(int n, int start) {
        
        vector<int> nums(n,0);
        
        int i = 0,j,xorN = 0;
        
       while(i!=n){
           
           nums[i] = start + 2*i;
           i++;
      
       }
        
        for(i = 0;i<nums.size();i++){
            
            xorN = xorN ^ nums[i];
            
            
        }
            
            
    return xorN;
        
    }
};