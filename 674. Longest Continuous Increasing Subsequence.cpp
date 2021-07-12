class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
    int maxTot = 1;
    int currMax = 1;

    int n = nums.size();
        
    for(int i = 0;i<n-1;i++){
        
        
        if(nums[i] < nums[i+1])
            currMax++;
        else
            currMax = 1;
        
        maxTot = max(maxTot,currMax);
        }
            
        
        return maxTot;
    }
};