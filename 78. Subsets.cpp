class Solution {
public:
    vector<vector<int>> arr;
    void subsets(vector<int> res,vector<int> &nums,int idx){
        
        if(idx == nums.size()){
            arr.push_back(res);
            return ;
        }
        res.push_back(nums[idx]);
        
        //making call for taking the idx 
        subsets(res,nums,idx+1); 
        //not taking
        res.pop_back();
        
        subsets(res,nums,idx+1);         
    
    }
    vector<vector<int>> subsets(vector<int>& nums) {
    
      vector<int> res;
        
      subsets(res,nums,0);
        
        return arr;
  
        
    }
};