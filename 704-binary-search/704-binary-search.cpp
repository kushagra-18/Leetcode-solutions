class Solution {
public:
    int search(vector<int>& nums, int X) {
        
        int ans = -1;
        int mid,s = 0;
        int e = nums.size() - 1;
        
        while(s<=e){ 
            mid = (s+e)>>1;
            if(nums[mid] == X){   
                return mid;   
            }else if(nums[mid]> X){ 
                e = mid - 1;  
            }else 
                s = mid + 1;      
          }
        
        return ans;
        
    }
};