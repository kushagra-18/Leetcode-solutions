class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        
        unordered_set<int> mp;
        
        int n = nums.size() - 1;
        
        for(int i = 0;i<n;i++){
            
             int sum = nums[i] + nums[i+1];
            
            cout<<sum<<" ";
            if(mp.find(sum)!=mp.end())
                return true;
            
            mp.insert(sum);
            
        }
        
        return false;
    }
};