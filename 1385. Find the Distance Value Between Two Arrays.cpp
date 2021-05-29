class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        int n = arr1.size(),n1 = arr2.size(),dist = arr1.size();
        
        int i,j;
        
        
        for(i = 0;i<n;i++){
            
            for(j = 0;j<n1;j++){
                
                if(abs(arr1[i] - arr2[j])<= d)
                {
                    dist--;
                    break;
                    
                    
                }
                
            }
                 
        }
    
     return dist;   
        
    }
};