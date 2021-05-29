class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
       int n = A.size(),i;
        vector <int> arr;
        
        
        for(i = 0;i<n;i++){
            
            if(A[i]%2==0){
                
                arr.push_back(A[i]);
            }
                 
            
        }
        
        
            for(i = 0;i<n;i++){
            
            if(A[i]%2!=0){
                
                arr.push_back(A[i]);
            }
                 
            
        }
        
        return arr;
        
        
    }
};