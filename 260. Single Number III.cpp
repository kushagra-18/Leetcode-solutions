class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        int n = nums.size(),i,j,count = 0;
        
        vector <int> arr;
        
        
        for(i = 0;i<n;i++)
        {
            
         auto  it = arr.insert(arr.begin()+index[i], nums[i]);   
       
        }
        
        return arr;
    }
};class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        map<int,int> :: iterator it;  
        map <int,int> mp;
        
        vector <int> arr;
        
        int n = nums.size(),i;
        
      for(auto i:nums)
      {
            mp[i]++; 
      }

        
        
  for(it = mp.begin(); it!= mp.end();it++)
    {
        if((*it).second==1){
            
            arr.push_back((*it).first);
            
        } 
    }
        
        
      return arr;  
    }
};