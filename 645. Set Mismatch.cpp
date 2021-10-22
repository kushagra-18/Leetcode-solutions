class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        
        vector <int> res;
        
        for(auto x:nums)
            
            mp[x]++;
        
        int n = nums.size();
        
       for(auto x:mp){
           
           if(x.second == 2)
            res.push_back(x.first);
       }
        
       for(int i = 1;i<=n;i++){
           
           if(mp.find(i)!=mp.end()){
               //do nothing
           }
           else
                res.push_back(i);
       } 
        
        return res;
    }
};