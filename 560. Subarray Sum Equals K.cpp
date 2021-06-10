class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
     unordered_map <int,int> mp;
    
        int n = nums.size();
        
        int res = 0,currSum = 0;
        
        
        for(int i = 0;i<n;i++){
            
            currSum += nums[i];
            
            if(currSum == k){
                
                res++;
            }
            
            
            if(mp.find(currSum-k)!= mp.end()){
                
                res += mp[currSum-k];
            }
            
          mp[currSum]++;  
            
        }
        
        return res;     
    }
};