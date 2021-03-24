class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        map<int,int> mp;
        
        int res;
        
        
        for(auto i:nums){
            
            mp[i]++;
        }
        
        for(auto i:mp){
            
            if(i.second==1){
                
                res = i.first;
                break;
            }
            
        }
        
        return res;
        
    }
};