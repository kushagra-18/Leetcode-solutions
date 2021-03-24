class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int n = arr.size(),i,flag = 0,j = 0,k = 0,m = 1;
        
        if(n<3){
            
            return false;
        }
        
        while(m<n){
            
            if(arr[m-1] == arr[m]){
                
                k = -1;
                break;
            }
            m++;
        }
        if(k==-1)
        return false;
    
        
       /* if(arr[0] == arr[1] || arr[1] == arr[2]){
            
            return false;
        }*/
        
        for(i = 0;i<n;i++){
            
            if(arr[i] > arr[i+1]){
                
                break;
            }
        }

            int temp = n-i;
        
        if(i+1==n || i==0){
            
            return false;
        }
            
            for(j = i;j<n;j++){
                
                
                if(j+1<n){ 
                
                if(arr[j] < arr[j+1]){
                    
                    break;
                     }
                    k++;
                }
                
            }
        
            
            if(k+1 == temp)
            return true;
            else
                return false;
    
        
    }
};