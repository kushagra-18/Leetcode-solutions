class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector res = {-1,-1};
        
        int lb = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        
        
        int hb = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        
        if(lb==nums.size() || nums[lb] != target)
            return res;
        
        return {lb,hb-1};
        
    }
};