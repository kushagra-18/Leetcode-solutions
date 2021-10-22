class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set <int> mp;
        
        vector <int> arr;
        
        for(auto x:nums1){
            
            mp.insert(x);
        }
        
   
        
        for(auto x:nums2){
            
            if(mp.find(x)!=mp.end())
                arr.push_back(x);
                mp.erase(x);
            
            
        }
        
        
        return arr;
        
    }
};