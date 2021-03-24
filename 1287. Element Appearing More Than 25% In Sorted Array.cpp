class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
        int n = arr.size(),res;
        
        map <int,int> mp;
        
        
        for(auto i:arr){
            
            mp[i]++;
        }
        
        
        for(auto i:mp){
            
            
            if(i.second>n/4){
                
                res = i.first;
            }
        }
        
        return res;
        
    }
};