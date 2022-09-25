class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        if(!nums.size())
            return 0;
        
        int maxx = INT_MIN;
        
        for(auto &x:nums){
            
            maxx = max(maxx,x);
            
        }
        
        int count = 0;
        int maxCount = INT_MIN;
        for(auto x:nums){
            
            if(maxx==x){
                count++;
                maxCount = max(count,maxCount);
            }else{
                count = 0;
            }
            
        }
        
        return maxCount;
    }
};