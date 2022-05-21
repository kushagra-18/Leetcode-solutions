class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
         
        int n = nums.size();
        vector <int> temp;
        
        temp.push_back(nums[0]);
        
        for(int i = 1;i<n;i++){
            
            
            if(nums[i]>temp.back())
                temp.push_back(nums[i]);
            else{

                auto idx = lower_bound(temp.begin(),temp.end(),nums[i]) - temp.begin();

                temp[idx] = nums[i];
            }
            
            if(temp.size()==3)
                return true;
              
        }
        
        return false;
        
    }
};