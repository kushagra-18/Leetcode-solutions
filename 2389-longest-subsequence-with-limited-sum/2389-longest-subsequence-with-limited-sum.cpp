class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        vector<int> res;
        int count = 0;
        
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        
        for(int i = 1;i<n;i++){
            
            nums[i] += nums[i-1];
            
        }
        
        
        for(int i = 0;i<queries.size();i++){
            
            int idx = upper_bound(nums.begin(),nums.end(),queries[i]) - nums.begin();
            
            res.push_back(idx);
        }
        
        return res;
        
    }
};