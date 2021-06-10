class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        
        int n = nums.size(),res = 0,rem = 0, currSum = 0;
        
        mp[0] = 1;
        
        for(int i = 0;i<n;i++){
            
            currSum += nums[i];
            
            rem = (currSum%k);
            
            if(rem < 0){
                
                rem += k;
            }
                     
            if(mp.find(rem)!=mp.end()){
                
            res += mp[rem];
                
            }
            
            mp[rem]++;
        }
        
        return res;
    }
};