class Solution {
public:
    vector<int> sumZero(int n) {
        
        int i,k,j;
        
        vector <int> arr(n);
        
        
        for(i = 0;i<n;i++){
            
            //for odd
            
                if(n%2!=0){
                    
                    k = n/2;
                    
                    arr[k] = 0;
                   
                    j = -1;
                    for (i = k-1;i>=0;i--){
                        
                        
                        arr[i] = j--;
                        
                    }
                    
                    j = 1; 
                    
                    for (i = k+1;i<n;i++){
                        
                        arr[i] = j++;
                        }
                    

            
              }else
                
                    //for even
                
                {
                    
                    k = n/2;
                    
                   
                    j = -1;
                    
                    for (i = k-1;i>=0;i--){
                        
                        
                        arr[i] = j--;
                        
                    }
                         
                    
                    j = 1; 
                    
                    for (i = k;i<n;i++){
                        
                        arr[i] = j++;
                        }
                    

            
              }


        
         }
        return arr;
    }
};