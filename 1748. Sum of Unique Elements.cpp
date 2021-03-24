class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int n = nums.size(),tot = 0;
        
        map<int,int> mp;
        
    for(int i = 0;i<n;i++){
      
        mp[nums[i]]++;
        
    }
        
        
        for(auto x:mp){
            
            if(x.second==1){
                
                tot = tot + x.first;
            }
            
        }
        
        
        
        return tot;
    }
};