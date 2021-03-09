class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int,int>mp;       
        
        int ans=0,i;
        
       for(int i:nums){
           
            mp[i]++;
           
            if(mp[i]>= 2){
             
                ans= true;
              
                break;
            }else{
                
                ans = false;
            }
        }
        
        
        return ans;
        
    }
};