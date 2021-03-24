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
};