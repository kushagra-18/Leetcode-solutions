class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        
        int n = arr.size(),i,j;
        
        vector <int> res(2);
        
        
        for(i = 0 ;i<n;i++){
            
            
            for(j =0;j<n;j++){
                
                if(i!=j){
                    
                    if(arr[i] + arr[j] == target){
                        
                      res[0] = i;
                        res[1] = j;
                        
                        break;
                    }
                    
                }
                
            }
        }
        
        
       return res; 
    }
};