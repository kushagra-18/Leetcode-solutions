class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> res;
        
        int n = nums.size();
        
        if (n == 0) {
            return res;
        }
       
        sort(nums.begin(), nums.end());
        
        int i = 0;
        
        while (i<n-1) {
            if (nums[i] == nums[i+1]) 
            {
                res.push_back(nums[i++]); 
            }
            i++;
        }
        return res;
    }
};