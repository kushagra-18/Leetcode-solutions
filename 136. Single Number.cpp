class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        
        map<int,int> mp;
        
        map<int,int> :: iterator it; 
        
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
        
        
      /*  for(it = mp.begin();it!=mp.end();it++){
            
            if((*it).second == 1){
                
                res = (*it).first;
                break;
                
            }
            
        }*/
        
        return res;
    }
};