class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        
        int maxx = 0;
        
        for(int i = 0;i<n-2;i++){
            
            if(nums[i] + nums[i+1] > nums[i+2])
                maxx = max(nums[i] + nums[i+1] + nums[i+2],maxx);
            
        }
        
        return maxx;
        
    }
};