class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int minVal = 1;
        int maxVal = 1;
        int res = *max_element(nums.begin(),nums.end());
        
      for(auto &x:nums){
          
          if(x==0){
              
              minVal = maxVal = 1;
              continue;
              
          }
          int temp = maxVal*x;
          
          maxVal = max({x,minVal*x,maxVal*x});
          minVal = min({x,minVal*x,temp});
          
          res = max({res,maxVal,minVal});
        }
            
        return res;
        
    }
};