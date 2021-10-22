class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        
        int n = m.size();
        
        int k = m[0].size();
        
        int high = n*k - 1;
        int low = 0;
        
        while(low<=high){
            
            int mid = (low + high)/2;
            
            if(m[mid/k][mid%k] == target)
                
                return true;
            
            else if(m[mid/k][mid%k] < target)
                
                low = mid + 1;
            else
                
                high = mid - 1;
            
            
        }
        
        return false;
        
    }
};